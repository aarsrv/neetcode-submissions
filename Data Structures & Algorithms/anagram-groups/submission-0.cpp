class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string s : strs){
            vector<int> charMap(26, 0);
            for(char ch : s){
                charMap[ch - 'a']++;
            }

            string key = to_string(charMap[0]);
            for(int i = 1; i < 26; i++){
                key += ',' + to_string(charMap[i]);
            }
            mp[key].push_back(s);
        }

        vector<vector<string>> soln;
        for(const auto& val : mp){
            soln.push_back(val.second);
        }

        return soln;

    }
};
