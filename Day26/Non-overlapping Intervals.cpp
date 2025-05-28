


class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[1] < b[1];
        });
        
        int count = 0;
        int prevEnd = INT_MIN;
        
        for (auto &interval : intervals) {
            int start = interval[0], end = interval[1];
            if (start < prevEnd) {
                
                count++;
            } else {
                prevEnd = end;
            }
        }
        return count;
        
    }
};
