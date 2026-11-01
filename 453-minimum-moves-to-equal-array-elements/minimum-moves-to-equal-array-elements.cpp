class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int moves = 0;

        for (int i = 1; i < nums.size(); i++) {
            moves += (nums[i] - nums[0]);
        }

        return moves;
    }
};