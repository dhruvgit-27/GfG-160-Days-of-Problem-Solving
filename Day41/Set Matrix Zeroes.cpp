

// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        bool firstRowZero = false, firstColZero = false;
        
        for (int j = 0; j < m; ++j) {
            if (mat[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (mat[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }
        
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }
        if (firstRowZero) {
            for (int j = 0; j < m; ++j) {
                mat[0][j] = 0;
            }
        }
        
        if (firstColZero) {
            for (int i = 0; i < n; ++i) {
                mat[i][0] = 0;
            }
        }
    }
};