

// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        unordered_map<int, int> prefixSumCount;
        int curr_sum = 0;
        int count = 0;
        
        for (int num : arr) {
            curr_sum += num;
            
            if (curr_sum == k) {
                count++;
            }
            
            if (prefixSumCount.find(curr_sum - k) != prefixSumCount.end()) {
                count += prefixSumCount[curr_sum - k];
            }
            
            prefixSumCount[curr_sum]++;
        }
        return count;
    }
};