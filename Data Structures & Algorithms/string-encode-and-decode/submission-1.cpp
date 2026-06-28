class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;

        for(string s : strs){
            encoded_string += (to_string(s.size()) + "#" + s);
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
    
        int size = s.size();
        int i = 0;
        while(i < size){
            int j = 0;
            while(s[i + j] != '#'){
                j++;
            }

            int currSize = stoi(s.substr(i, j));
            i = i + j + 1;
            string curr = s.substr(i, currSize);
            decoded_strs.push_back(curr);
            i = i + currSize;
        }

        return decoded_strs;
    }
};