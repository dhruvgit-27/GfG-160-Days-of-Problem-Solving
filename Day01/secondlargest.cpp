

int getSecondLargest(int *arr, int n) {
    if (n < 2) {
        return -1;
    }
    
    int first = INT_MIN, second = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    return (second == INT_MIN) ? -1 : second;
}