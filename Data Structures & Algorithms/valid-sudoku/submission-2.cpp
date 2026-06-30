class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
        char currVal; int square;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.')
                    continue;

                currVal = board[i][j];
                square = (i/3) * 3 + (j/3);
                if(
                    rows[i].contains(currVal) ||
                    cols[j].contains(currVal) ||
                    boxes[square].contains(currVal)
                    )
                    return false;

                rows[i].insert(currVal);
                cols[j].insert(currVal);
                boxes[square].insert(currVal);
            }
        }
        return true;
    }
};
