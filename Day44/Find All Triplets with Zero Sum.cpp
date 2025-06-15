

// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>> result;
        set<vector<int>> seen;
        
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (arr[i] + arr[j] + arr[k] == 0) {
                        vector<int> triplet = {i, j, k};
                        if (seen.find(triplet) == seen.end()) {
                            seen.insert(triplet);
                            result.push_back(triplet);
                        }
                    }
                }
            }
        }
        
        return result;
    }
};