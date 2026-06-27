class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        vector<int> freq (26, 0);
        int size = s.size();
        for(int i = 0; i < size; i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int val : freq){
            if(val != 0)
                return false;
        }

        return true;
    }
};
