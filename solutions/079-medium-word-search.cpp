class Solution1 {
	bool do_find(vector<vector<char>>& board, string &word, set<pair<int, int>> &path, int row, int col, int off) {
		if (off == word.size()) return true;
		if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size()) return false;
		if (board[row][col] != word[off]) return false;
		auto pos = make_pair(row, col);
		if (path.find(pos) != path.end()) return false;
		path.insert(pos);
		off++;
		if (do_find(board, word, path, row-1, col, off)) return true;
		if (do_find(board, word, path, row+1, col, off)) return true;
		if (do_find(board, word, path, row, col-1, off)) return true;
		if (do_find(board, word, path, row, col+1, off)) return true;
		path.erase(pos);//do not forget this
		return false;
	}
public:
    bool exist(vector<vector<char>>& board, string word) {
    	if (board.empty() || board[0].empty()) return false;
    	int m = board.size(), n = board[0].size();
    	set<pair<int, int>> path;
    	for (int row = 0; row < m; ++row) {
    		for (int col = 0; col < n; ++ col) {
    			if (do_find(board, word, path, row, col, 0)) return true;
    		}
    	}
    	return false;
    }
};

class Solution {
	bool do_find(vector<vector<char>>& board, string &word, int row, int col, int off) {
		if (off == word.size()) return true;
		if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size()) return false;
		if (board[row][col] != word[off]) return false;
		board[row][col] = 0;
		off++;
		if (do_find(board, word, row-1, col, off)) return true;
		if (do_find(board, word, row+1, col, off)) return true;
		if (do_find(board, word, row, col-1, off)) return true;
		if (do_find(board, word, row, col+1, off)) return true;
		board[row][col] = word[off-1];
		return false;
	}
public:
    bool exist(vector<vector<char>>& board, string word) {
    	if (board.empty() || board[0].empty()) return false;
    	for (int row = 0; row < board.size(); ++row) {
    		for (int col = 0; col < board[0].size(); ++ col) {
    			if (do_find(board, word, row, col, 0)) return true;
    		}
    	}
    	return false;
    }
};
