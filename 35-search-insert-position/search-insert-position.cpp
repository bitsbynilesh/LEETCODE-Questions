class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int n = nums.size();
        // int low = 0 ;
        // int high = n - 1;
        // while(low <= high){
        //     int mid = low + (high - low) /2;
        //     if(nums[mid] == target){
        //         return mid;
        //     }else if(nums[mid] > target){
        //         high = mid - 1;
        //     }else{
        //         low = mid + 1;
        //     }
        // }
        // return low;

        int index = lower_bound(nums.begin() , nums.end() , target) - nums.begin();
        // if( index < nums.size() && nums[index] == target )
        return index;
    }
};