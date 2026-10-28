class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> frequencyMap;

        int start = 0;
        int maxFrequency = 0;
        int maxLength = 0;

        for (int end = 0; end < s.size(); end++) {
            frequencyMap[s[end]]++;

            maxFrequency = max(maxFrequency, frequencyMap[s[end]]);

            while ((end - start + 1) - maxFrequency > k) {
                frequencyMap[s[start]]--;
                start++;
            }

            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};