


// User function Template for C

// Function to find maximum product subarray
int maxProduct(int arr[], int n) {
    int ans = arr[0];
    int maxVal = arr[0];
    int minVal = arr[0];
    
    for (int i = 1; i < n; i++) {
        
        if (arr[i] < 0) {
            int temp = maxVal;
            maxVal = minVal;
            minVal = temp;
        }
        
        maxVal = (arr[i] > arr[i] * maxVal) ? arr[i] : arr[i] * maxVal;
        minVal = (arr[i] < arr[i] * minVal) ? arr[i] : arr[i] * minVal;
        
        if(maxVal > ans) {
            ans = maxVal;
        }
    }
    return ans;
    
}