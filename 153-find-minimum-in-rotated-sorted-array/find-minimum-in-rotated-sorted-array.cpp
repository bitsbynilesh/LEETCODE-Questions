class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 1 ;
        int high = nums.size() - 1;
        int target = 0;
        sort(nums.begin() , nums.end());
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[low] <= nums[mid]){

                if(nums[low] <= target && target <= nums[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else{
                
                if(nums[mid] < target && target <= nums[high]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
        }  
        return nums[target];
    }
};