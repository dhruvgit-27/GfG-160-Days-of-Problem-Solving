

// User function template for C++

class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        int n = mat.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        for (int col = 0; col < n; ++col) {
            int top = 0, bottom = n - 1;
            while (top < bottom) {
                swap(mat[top][col], mat[bottom][col]);
                top++;
                bottom--;
            }
        }
    }
};