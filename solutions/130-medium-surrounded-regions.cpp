class Solution_negative {//this would cause run-time error for unknown reason
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if (m == 0) return;
        int n = board[0].size();
        if (n == 0) return;

        for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (board[i][j] == 'O') check(board, i, j);
                }
        }

        for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                        if (board[i][j] == 'A') board[i][j] = 'O';
                }
        }
    }
private:
    char check(vector<vector<char>>& board, int r, int c)
    {
        if(board[r][c] != 'O')  return board[r][c];
        board[r][c] = 'C';

        int m = board.size(), n = board[0].size();
        if (r <= 0 || r >= m-1 || c <= 0 || c >= n-1) {
                board[r][c] = 'A';
                return 'A';
        }

        if (board[r-1][c] == 'A' || board[r+1][c] == 'A' || board[r][c-1] == 'A' || board[r][c+1] == 'A') {
            board[r][c] = 'A';
            return 'A';
        }


        if (
                check(board, r-1, c) == 'A' ||
                check(board, r+1, c) == 'A' ||
                check(board, r, c-1) == 'A' ||
                check(board, r, c+1) == 'A'
        ) {
            board[r][c] = 'A';
        } else {
            board[r][c] = 'X';
        }
        return board[r][c];

    }
};



class Solution0 { //Recursive DFS

public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board.back().empty()) return;
        m = board.size(), n = board[0].size();

        for (int i = 0; i < n; ++i) {
            if (board[0][i] == 'O')  infect(board, 0, i);
            if (board[m-1][i] == 'O') infect(board, m-1, i);
        }

        for (int i = 0; i < m; ++i) {
            if (board[i][0] == 'O')  infect(board, i, 0);
            if (board[i][n-1] == 'O') infect(board, i, n-1);
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 'O') board[i][j] = 'X';
                if (board[i][j] == 'A') board[i][j] = 'O';
            }
        }

    }
private:
    int m;
    int n;
    void infect(vector<vector<char>>& board, int r, int c)
    {
        board[r][c] = 'A';//set as alive
        if (r > 1 && board[r-1][c] == 'O') infect(board, r-1, c);
        if (r < m-1 && board[r+1][c] == 'O') infect(board, r+1, c);
        if (c > 1 && board[r][c-1] == 'O') infect(board, r, c-1);
        if (c < n-1 && board[r][c+1] == 'O') infect(board, r, c+1);

    }
};



class Solution {//Non-recursive, BFS solution
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board.back().empty()) return;
        m = board.size(), n = board[0].size();

        for (int i = 0; i < n; ++i) {
             color(board, 0, i);
             color(board, m-1, i);
        }

        for (int i = 0; i < m; ++i) {
            color(board, i, 0);
            color(board, i, n-1);
        }

        while (!q.empty()) {
            int r = q.front().first, c = q.front().second;
            q.pop();
            color(board, r-1, c);
            color(board, r+1, c);
            color(board, r, c-1);
            color(board, r, c+1);
        }

         for (int i = 0; i < m; ++i) {
             for (int j = 0; j < n; ++j) {
                 if (board[i][j] == 'O') board[i][j] = 'X';
                 if (board[i][j] == 'A') board[i][j] = 'O';
             }
         }
    }
private:
    queue<pair<int,int>> q;
    int m;
    int n;
    void color(vector<vector<char>> &board, int r, int c) {
        if (r >= 0 && r < m && c >= 0 && c < n && board[r][c] == 'O') {
            board[r][c] = 'A';
            q.push(make_pair(r, c));
        }
    }

};
