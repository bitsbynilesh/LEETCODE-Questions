class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
    //     if (nums.empty()) return 0;
        
    //     int i = 0;
    //     for (int j = 1; j < nums.size(); j++) {
    //         if (nums[j] != nums[i]) {
    //             i++;
    //             nums[i] = nums[j];
    //         }
    //     }
    //     return i + 1;
    // }

    
        set<int> unique_elements(nums.begin(), nums.end());
        int index = 0;
        for (int val : unique_elements) {
            nums[index++] = val;
        }
        return unique_elements.size();
    }
};
