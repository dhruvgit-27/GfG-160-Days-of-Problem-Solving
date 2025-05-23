


// User function Template for C

// Function to sort an array of 0s, 1s, and 2s
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    
    while (mid <= high){
        switch (arr[mid]) {
            case 0:
            
            {
                int temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++;
                mid++;
            }
            break;
         case 1:
            mid++;
            break;
        case 2:
            {
                int temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
            }
            break;
        }
    }
    
}
