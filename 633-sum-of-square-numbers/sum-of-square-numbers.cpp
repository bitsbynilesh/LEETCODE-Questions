class Solution {
public:
    bool judgeSquareSum(int c) {
        int left = 0;
        long long right = (int)sqrt(c);
        while(left <= right){
            long long sum = left * left  +  right * right;
            if(sum == c) return true;
            else if (sum < c) left++;
            else right--; 
        }
        return false;
    }
};