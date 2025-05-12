


int max(int a, int b) {
    return (a > b) ? a:b;
}
int maxSubarraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int current_max = arr[0];
    
    for (int i = 1; i < n; i++) {
        current_max = max(arr[i], current_max + arr[i]);
        max_so_far = max(max_so_far, current_max);
    }
    
    return max_so_far;
    
}