


// User function Template for C
//  Function to find the peak element
#include <limits.h>
int peakElement(int *arr, int n) {
    int low= 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        int left = (mid == 0) ? INT_MIN : arr[mid - 1];
        int right = (mid == n - 1) ? INT_MIN : arr[mid + 1];
        
        if (arr[mid] >= left && arr[mid] >= right )
            return mid;
        else if (arr[mid] < right)
            low = mid + 1;
        else 
            high = mid - 1;
    }
    
    return -1;
    
}