class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mp; 
        mp[0] = 1;
        int n = nums.size();
        int count = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(i > 0)
            nums[i] = nums[i] + nums[i-1];
            if(mp.find(nums[i] - k) != mp.end()){
                count = count + mp[nums[i]- k];
            }
            mp[nums[i]]++;
        }
        return count;
        
    }
};