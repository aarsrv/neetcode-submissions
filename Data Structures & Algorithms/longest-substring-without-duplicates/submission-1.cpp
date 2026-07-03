class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> window;
        int left = 0, length = 0;

        for (int right = 0; right < s.size(); right++){
            if (window.count(s[right])){
                left = max(left, window[s[right]] + 1);
            }
            window[s[right]] = right;
            length = max(length, right - left + 1);
        }

        return length;
    }
};
