class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix_sum(n);
        prefix_sum[0] = nums[0];


        for(int i=1 ; i<n ; i++) {
            prefix_sum[i] = prefix_sum[i-1] + nums[i];
        }
        return prefix_sum;
        
    }
};