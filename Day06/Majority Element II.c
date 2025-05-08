
// User function Template for C

int* findMajority(int arr[], int n, int* resultSize) {
    
    int count1 = 0, count2 = 0;
    int candidate1 = 0, candidate2 = 0;
    
    for (int i = 0; i < n; i++) {
        if (count1 > 0 && arr[i] == candidate1) {
            count1++;
        } else if (count2 > 0 && arr[i] == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = arr[i];
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = arr[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }
    
    count1 = count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1) count1++;
        else if (arr[i] == candidate2) count2++;
    }
    
    int* result = (int*)malloc(2 * sizeof(int));
    *resultSize =0;
    
    if (count1 > n / 3) result[(*resultSize)++] = candidate1;
    if (count2 > n / 3) result[(*resultSize)++] = candidate2;
    
    if(*resultSize == 2 && result[0] > result[1]) {
        int temp = result[0];
        result[0] = result[1];
        result[1] = temp; 
    }
    
    return result;
}