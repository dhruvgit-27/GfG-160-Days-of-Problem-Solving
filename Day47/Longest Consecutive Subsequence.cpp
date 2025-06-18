

#include <vector>
#include <unordered_set>
using namespace std;



class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> s(arr.begin(), arr.end());
        int maxLength = 0;
        
        for (int num : s) {
            
            if (s.find(num - 1) == s.end()) {
                int currentNum = num;
                int currentStreak = 1;
                
                while (s.find(currentNum + 1) != s.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                maxLength = max(maxLength, currentStreak);
            }
        }
        
        return maxLength;
        
    }
};