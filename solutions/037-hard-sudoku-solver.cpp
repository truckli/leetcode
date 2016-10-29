class Solution {
    bool fill_one(vector<vector<char>>& board) {
        vector<bool> used(9, false);
        int row, col;
        for (row = 0; row < 9; ++row) {
            for (col = 0; col < 9; ++col) {
                if (board[row][col] == '.') break;
            }
            if (col < 9) break;
        }
        if (row == 9 && col == 9) return true;
        for (int i = 0; i < 9; ++i) {
            if (board[row][i] != '.') {
                used[board[row][i]-'1'] = true;
            }
            if (board[i][col] != '.') {
                used[board[i][col]-'1'] = true;
            }
            if (board[row/3*3+i/3][col/3*3+i%3] != '.') {
               used[board[row/3*3+i/3][col/3*3+i%3] - '1'] = true;
            }
        }

        for (int j = 0; j < 9; j++) {
            if (!used[j]) {
                board[row][col] = '1' + j;
                if (fill_one(board)) return true;
            }
        }
        board[row][col] = '.';
        return false;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        fill_one(board);

    }
};

