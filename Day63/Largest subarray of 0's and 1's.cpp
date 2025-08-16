class Solution {
  public:
    int maxLen(vector<int> &arr) {
        unordered_map<int, int> prefixSumIndex;
        int maxLen = 0, sum = 0;
        
        for (int i = 0; i < arr.size(); ++i) {
            sum += (arr[i] == 0) ? -1 : 1;
            
            if (sum == 0) {
                maxLen = i + 1;
            }
            
            if (prefixSumIndex.find(sum) != prefixSumIndex.end()) {
                maxLen = max(maxLen, i - prefixSumIndex[sum]);
            } else {
                prefixSumIndex[sum] = i;
            }
        } 
        
        return maxLen;
    }
}; 
