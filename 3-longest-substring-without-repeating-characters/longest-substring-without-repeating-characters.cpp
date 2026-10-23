class Solution {
public:
   int lengthOfLongestSubstring(string s) {
     int start = 0;
     int maxLength = 0;
     unordered_map<char, int> charFreq;

     for (int end = 0; end < s.length(); end++) {
        charFreq[s[end]]++;

         while (charFreq[s[end]] > 1) {
            charFreq[s[start]]--;
            start += 1;
         }

          maxLength = max(maxLength, end - start + 1);
        }

     return maxLength;
    }
};