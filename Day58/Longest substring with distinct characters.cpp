class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        vector<int> lastIndex(26, -1);
        int maxLength = 0;
        int start = 0;
        
        for (int end = 0; end < s.size(); ++end) {
            char ch = s[end];
            
            if (lastIndex[ch - 'a'] >= start) {
                start = lastIndex[ch - 'a'] + 1;
            }
            lastIndex[ch - 'a'] = end;
            maxLength = max(maxLength, end - start + 1);
        }
        
        return maxLength;
    }
}; 
