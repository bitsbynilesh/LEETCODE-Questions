class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        int n = candiesCount.size();

        vector<long long> prefixSum(n);
        prefixSum[0] = candiesCount[0];

        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + candiesCount[i];
        }

        vector<bool> ans;

        for (auto query : queries) {
            int favCandy = query[0];
            long long favDay = query[1];
            long long dailyCap = query[2];

            long long totalEatenBefore =
                (favCandy == 0) ? 0 : prefixSum[favCandy - 1];

            long long maxEaten = (favDay + 1) * dailyCap;

            long long minEaten = favDay + 1;

            if (maxEaten <= totalEatenBefore || minEaten > prefixSum[favCandy]) {
                ans.push_back(false);
            } else {
                ans.push_back(true);
            }
        }

        return ans;
    }
};