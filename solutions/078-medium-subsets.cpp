class Solution1 {
private:
	void do_subset(vector<int> &nums, int start, vector<int> &path, vector<vector<int>> &results) {
		if (start == nums.size()) {
			results.push_back(path);
			return;
		}

		path.push_back(nums[start]);
		do_subset(nums, start+1, path, results);
		path.pop_back();
		do_subset(nums, start+1, path, results);
	}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    	vector<vector<int>> results;
    	vector<int> path;
    	sort(nums.begin(), nums.end());
    	do_subset(nums, 0, path, results);
    	sort(results.begin(), results.end());
    	results.erase(unique(results.begin(), results.end()), results.end());
    	return results;
    }
};


class Solution {
private:
	void do_subset(vector<int> &nums, int start, vector<int> &path, vector<vector<int>> &results) {
		if (start == nums.size()) {
			results.push_back(path);
			return;
		}

		for (int i = start; i < nums.size(); ++i) {
			path.push_back(nums[i]);
			do_subset(nums, i+1, path, results);
			path.pop_back();
		}

		do_subset(nums, nums.size(), path, results);
	}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    	vector<vector<int>> results;
    	vector<int> path;
    	sort(nums.begin(), nums.end());
    	do_subset(nums, 0, path, results);
    	sort(results.begin(), results.end());
    	results.erase(unique(results.begin(), results.end()), results.end());
    	return results;
    }
};
