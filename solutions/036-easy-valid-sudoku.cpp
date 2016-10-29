class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<bool> present(9);
        for (int i= 0; i < 9; ++i) {
            fill_n(present.begin(), 9, false);
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.') continue;
                int digit = board[i][j] - '1';
                if (present[digit]) return false;
                present[digit] = true;
            }
            fill_n(present.begin(), 9, false);
            for (int j = 0; j < 9; ++j) {
                if (board[j][i] == '.') continue;
                int digit = board[j][i] - '1';
                if (present[digit]) return false;
                present[digit] = true;
            }
            fill_n(present.begin(), 9, false);
            for (int j = 0; j < 9; ++j) {
                char c = board[i/3*3+j/3][i%3*3+j%3];
                if (c == '.') continue;
                int digit = c - '1'; 
                if (present[digit]) return false;
                present[digit] = true;
            }
        }
        return true;
    }
};
