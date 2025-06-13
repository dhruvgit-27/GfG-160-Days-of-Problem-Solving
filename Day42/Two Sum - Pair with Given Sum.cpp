

// User function template for C++
#include <unordered_set>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> seen;
        for (int num : arr) {
            int complement = target - num;
            if (seen.find(complement) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }
        return false;
        
    }
};