class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstoccu(nums, target);
        if (first == -1) return {-1, -1};
        
        int last = lastoccu(nums, target);
        return {first, last};
    }

private:
    int firstoccu(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int first = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1; // Keep searching left for an earlier occurrence
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return first;
    }

    int lastoccu(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int last = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1; // Keep searching right for a later occurrence
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return last;
    }
};