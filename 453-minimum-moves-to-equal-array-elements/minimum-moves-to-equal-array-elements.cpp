class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long  sum = 0;
        int n = nums.size();
        int minel = *min_element(begin(nums) , end(nums));

        for(int i = 0 ; i< n ; i++){

             sum = sum + nums[i];
        }
        return sum - (long long)n * minel;
    }
};