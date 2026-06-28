class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;

        for(string s : strs){
            encoded_string += s + (char)257;
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        string curr = "";

        for(char ch : s){
            if(ch == (char)257){
                decoded_strs.push_back(curr);
                curr = "";
                continue;
            }
            curr += ch;
        }

        return decoded_strs;
    }
};
