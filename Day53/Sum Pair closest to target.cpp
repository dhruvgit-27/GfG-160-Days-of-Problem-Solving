

// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        int n = arr.size();
        if (n < 2) return {};
        
        sort(arr.begin(), arr.end());
        
        int left = 0, right = n - 1;
        int closestDiff = INT_MAX;
        int maxAbsDiff = -1;
        vector<int> result;
        
        while (left < right) {
            int sum = arr[left] + arr[right];
            int diff = abs(sum - target);
            int absDiff = abs(arr[right] - arr[left]);
            
            if (diff < closestDiff || (diff == closestDiff && absDiff > maxAbsDiff)) {
                closestDiff = diff;
                maxAbsDiff = absDiff;
                result = {arr[left], arr[right]};
            }
            
            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        
        return result;
    }
};