class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> window;
        int left = 0, length = 0;

        for(int right = 0; right < s.size(); right++){
            char ch = s[right];
            auto it = window.find(ch);
            if(it != window.end() && it->second >= left) left = it->second + 1;
            window[ch] = right;
            length = max(length, right - left + 1);
        }

        return length;
    }
};
