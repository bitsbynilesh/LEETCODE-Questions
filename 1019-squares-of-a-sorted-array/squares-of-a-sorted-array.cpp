class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector< int > arr(nums.size());
        int left  = 0 ;
        int right = n - 1 ;
        int i = n - 1; 

        while(left <= right){
            int leftsquare = nums[left] * nums[left];
            int rightsquare = nums[right] * nums[right];
            if(leftsquare < rightsquare){
                arr[i--] = rightsquare;
                right -= 1;
            }else{
                arr[i--] = leftsquare;
                left += 1;
            }
        }
        return arr;
    }
};