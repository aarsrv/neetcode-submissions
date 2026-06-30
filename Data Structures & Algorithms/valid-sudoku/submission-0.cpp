class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
        char currVal;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.')
                    continue;

                currVal = board[i][j];
                if(
                    rows[i].count(currVal) ||
                    cols[j].count(currVal) ||
                    boxes[(i/3)*3 + j/3].count(currVal)
                    )
                    return false;

                rows[i].insert(currVal);
                cols[j].insert(currVal);
                boxes[(i/3)*3 + j/3].insert(currVal);
            }
        }
        return true;
    }
};
