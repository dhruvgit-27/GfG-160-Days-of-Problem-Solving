

#include <unordered_map>
using namespace std;
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int> freq;
        int count = 0;
            
        for (int num : arr) {
            int complement = target - num;
            if (freq.find(complement) != freq.end()) {
                count += freq[complement];
            }
            freq[num]++;
        }
        return count;
        
    }
};