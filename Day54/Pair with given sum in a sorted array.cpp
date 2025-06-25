


class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int left = 0, right = arr.size() - 1;
        int count = 0;
        
        
        while (left < right){
            int sum = arr[left] + arr[right];
            
            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                if (arr[left] == arr[right]) {
                    int n = right - left + 1;
                    count += (n * (n - 1)) / 2;
                    break;
                } else {
                    int l_count = 1, r_count = 1;
                    
                    while (left + 1 < right && arr[left] == arr[left + 1]) {
                        l_count++;
                        left++;
                    }
                    while (right - 1 > left && arr[right] == arr[right - 1]) {
                        r_count++;
                        right--;
                    }
                    
                    count += l_count * r_count;
                    left++;
                    right--;
                }
            }
        }
        return count;
    }
};