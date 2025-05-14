

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        int n = arr.size();
        int total_sum = 0;
        
        int max_kadane = arr[0];
        int current_max = arr[0];
        
        int min_kadane = arr[0];
        int current_min = arr[0];
        
        total_sum = arr[0];
        
        for (int i =1; i < n; i++) {
            current_max = max(arr[i], current_max + arr[i]);
            max_kadane = max(max_kadane, current_max);
            
            current_min = min(arr[i], current_min + arr[i]);
            min_kadane = min(min_kadane, current_min);
            total_sum += arr[i];
        }
        
        if(total_sum == min_kadane) {
            return max_kadane;
        }
        
        return max(max_kadane, total_sum - min_kadane);
    }
};