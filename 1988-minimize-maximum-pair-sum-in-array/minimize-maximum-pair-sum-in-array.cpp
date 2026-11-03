class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int ans = 0 ; 
        int left = 0 ;
        int right = nums.size() -1 ;
        for( left = 0 ; left < nums.size() / 2 ; left++){

            int sum = nums[left] + nums[right];
            ans = max(ans , sum);

            right--;
        
        }
        return ans;

    }
};