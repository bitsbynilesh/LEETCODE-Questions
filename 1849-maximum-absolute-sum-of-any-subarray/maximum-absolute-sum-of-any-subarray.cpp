class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        // int currSubSum = nums[0];
        // int maxSubSum = nums[0];

        // // Kadanes algo for finding the max subarray sum

        // for(int i = 1 ; i < n ; i++){
        //     currSubSum = max(nums[i] , currSubSum + nums[i]);
        //     maxSubSum = max(maxSubSum , currSubSum);
        // }

        // // For minimum subarray sum 

        // int minSubSum  = nums[0];
        // currSubSum = nums[0];

        // for(int i = 1 ; i < n ; i++){
        //     currSubSum = min(nums[i] , currSubSum + nums[i]);
        //     minSubSum = min(minSubSum , currSubSum);
        // }
        // return max(maxSubSum , abs(minSubSum));
        
        int maxSum = nums[0];
        int minSum = nums[0];

        int currSumMax = nums[0];
        int currSumMin = nums[0];

        for(int i = 1; i < n ; i++){
            currSumMax = max(nums[i] , currSumMax + nums[i]);
            maxSum = max(maxSum , currSumMax);

            currSumMin = min(nums[i] , currSumMin + nums[i]);
            minSum = min(minSum , currSumMin);
        }
        return max(maxSum , abs(minSum));

    }
};