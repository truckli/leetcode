class Solution {
    void solve(int row, int n) {
        if (row == n) {
            vector<string> board(n, string(n, '.'));
            for (int i = 0; i < n; ++i) {
                board[i][columns[i]] = 'Q';
            }
            results.push_back(board);
            return;
        }
        for (int col = 0; col < n; ++col) {
            int major = row - col + n - 1, minor = row + col;
            if (col_free[col] && major_free[major] && minor_free[minor]) {
                columns[row] = col;
                col_free[col] = false;
                major_free[major] = false;
                minor_free[minor] = false;
                solve(row+1, n);
                col_free[col] = true;
                major_free[major] = true;
                minor_free[minor] = true;
            }
        }
    }
    vector<bool> col_free;
    vector<int> columns;
    vector<bool> major_free;
    vector<bool> minor_free;
    vector<vector<string>> results;

public:
    vector<vector<string>> solveNQueens(int n) {
        if (n <= 0) return results;
        columns = vector<int>(n);
        col_free = vector<bool>(n, true);
        major_free = vector<bool>(2*n-1, true);
        minor_free = vector<bool>(2*n-1, true);
        solve(0, n);
        return results;
    }
};
