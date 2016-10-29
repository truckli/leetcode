class Solution {
private:
	void do_combine(int start, int end, int nselect, vector<int> &path, vector<vector<int>> &results) {
		if (nselect == 0) {
			results.push_back(path);
			return;
		}
		int length = end - start;
		if (length < nselect) return;
		for (int i = start; i <= end-nselect; ++i) {
			path.push_back(i);
			do_combine(i+1, end, nselect-1, path, results);
			path.pop_back();
		}
	}
public:
    vector<vector<int>> combine(int n, int k) {
    	vector<vector<int>> results;
        vector<int> path;
        do_combine(1, n+1, k, path, results);
        return results;
    }
};
