class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] < nums[mid + 1]) {
                // Slope is rising: a peak is guaranteed on the right
                left = mid + 1;
            } else {
                // Slope is falling: mid itself could be a peak, or one is on the left
                right = mid;
            }
        }
        
        return left; // left == right, pointing to a peak element
    }
};