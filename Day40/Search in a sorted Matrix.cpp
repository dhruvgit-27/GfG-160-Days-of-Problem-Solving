



class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        int low = 0, high = n * m - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            int row = mid / m;
            int col = mid % m;
            
            if (mat[row][col] == x) {
                return true;
            }
            else if (mat[row][col] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return false;
        
    }
};