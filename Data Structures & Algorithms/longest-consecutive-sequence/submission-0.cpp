class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st (nums.begin(), nums.end());
        int currLen = 0, longest = 0;
        for(const auto& val : st){
            if(!st.count(val - 1)){
                currLen = 1;
                while(st.count(val + currLen))
                    currLen++;
                longest = max(longest, currLen);    
            }
        }

        return longest;
    }
};
