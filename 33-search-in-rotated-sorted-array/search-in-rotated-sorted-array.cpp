class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i] == target){    
        //      return i;;  
        //     }
        // }
        // return -1;
        
        int low = 0 ;
        int high = nums.size() - 1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;


        // Left half is sorted

        // Check whether target lies in left half

                if(nums[low] <= nums[mid]){
                    if(nums[low] <= target && target < nums[mid]){
                        high = mid - 1;
                    }else{
                        low= mid + 1;
                    }
                }else{

        // Right half is sorted

        // Check whether target lies in right half

                    if(nums[mid] < target && target <= nums[high]){
                        low = mid + 1;
                    }else{
                        high = mid - 1;
                    }
                }
            }
        return -1;
    }
};