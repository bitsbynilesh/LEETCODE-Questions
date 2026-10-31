class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int sum = 0;
        mp[0] = 1;   // base case: empty prefix
        int result = 0;

        for(int i = 0; i < n; i++) {
            sum += nums[i];
            int rem = sum % k;

            // handle negative remainders
            if(rem < 0) {
                rem += k;
            }

            // if remainder seen before, add its frequency
            if(mp.find(rem) != mp.end()) {
                result += mp[rem];
            }

            // always increment frequency of this remainder
            mp[rem]++;
        }

        return result;
     }
    };