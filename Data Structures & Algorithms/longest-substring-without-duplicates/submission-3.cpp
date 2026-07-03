class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        array <int, 256> charIndex;
        charIndex.fill(-1);
        int left = 0, length = 0;

        for (int right = 0; right < s.size(); right++){
            char ch = s[right];
            if(charIndex[ch] >= left){
                left = charIndex[ch] + 1;
            }
            charIndex[ch] = right;
            length = max(length, right - left + 1);
        }

        return length;
    }
};
