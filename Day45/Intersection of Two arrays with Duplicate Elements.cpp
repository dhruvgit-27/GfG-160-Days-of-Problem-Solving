

#include <vector>
#include <unordered_set>

using namespace std;



class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        unordered_set<int> setA(a.begin(), a.end());
        unordered_set<int> resultSet;
            
        for (int num : b) {
            if (setA.count(num)) {
                resultSet.insert(num);
            }
        }
            
        return vector<int>(resultSet.begin(), resultSet.end());
        
    }
};