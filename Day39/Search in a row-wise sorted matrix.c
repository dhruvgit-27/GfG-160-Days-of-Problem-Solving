

// User function Template for C

// Function to search for an element in a row-wise sorted matrix
bool searchRowMatrix(int** mat, int n, int m, int x) {
    for (int i = 0; i < n; i++) {
        int low = 0, high = m - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mat[i][mid] == x)
                return true;
            else if (mat[i][mid] < x)
                low = mid + 1;
            else 
                high = mid - 1;
        }
    }
    return false;
}