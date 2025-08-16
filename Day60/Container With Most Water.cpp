class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1;
        int max_area = 0;
        
        while (left < right) {
            int height = min(arr[left], arr[right]);
            int width = right -left;
            int current_area = height * width;
            max_area = max(max_area, current_area);
            
            if (arr[left] < arr[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_area;
        
    }
}; 
