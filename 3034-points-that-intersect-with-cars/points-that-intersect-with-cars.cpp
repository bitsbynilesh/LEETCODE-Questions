class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> diff(102, 0);

        for (const auto& car : nums) {
            int start = car[0];
            int end = car[1];
            diff[start] += 1;
            diff[end + 1] -= 1;
        }
        int ans = 0;
        int running_sum = 0;

        for (int i = 1; i <= 100; ++i) {
            running_sum += diff[i]; 
            if (running_sum > 0) {
                ans++;
            }
        }

        return ans;
    }
};