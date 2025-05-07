
void swap (int* a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// Function to find the next permutation
void nextPermutation(int arr[], int n) {
    int i = n -2;
    while (i >= 0 && arr[i] >= arr[i + 1])
    i--;
    
    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i])
            j--;
        swap(&arr[i], &arr[j]);
    }
    
    reverse(arr, i + 1, n - 1);
}