class Solution1 {
	vector<vector<int>> results;
	vector<int> path;
	map<int, int> counts;
	vector<int> values;
	void do_subsets(int start) {
		if (start == values.size()) {
			results.push_back(path);
			return;
		}

		do_subsets(start+1);
		for (int nuse = 1; nuse <= counts[values[start]]; nuse++) {
			path.push_back(values[start]);
			do_subsets(start+1);
		}
				path.resize(path.size() - counts[values[start]]);

	}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    	for (auto v : nums) {
    		auto pos = counts.find(v);
    		if (pos == counts.end()) {
    			counts[v] = 1;
    		} else {
    			pos->second += 1;
    		}
    	}

    	for (auto item : counts) values.push_back(item.first);
    	do_subsets(0);
    	return results;
    }
};


//a non-recursive approach
class Solution {
	vector<vector<int>> results;
	vector<int> path;
	map<int, int> counts;
	vector<int> values;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    	for (auto v : nums) {
    		auto pos = counts.find(v);
    		if (pos == counts.end()) {
    			counts[v] = 1;
    		} else {
    			pos->second += 1;
    		}
    	}
    	results.push_back(path);

    	for (auto item : counts) values.push_back(item.first);
    	for (auto v :values) {
    		int nresult = results.size();
    		for (int i = 0; i < nresult; ++i) {
    			auto result = results[i];
    			for (int j = 1; j <= counts[v]; ++j) {
    				result.push_back(v);
    				results.push_back(result);
    			}
    		}
    	}

    	return results;
    }
};
