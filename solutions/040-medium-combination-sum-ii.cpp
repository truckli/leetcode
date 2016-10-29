class Solution {
    void do_combine(vector<int>& candidates, int start, int target, vector<vector<int>> &result, string &path) {
        if (target == 0) {
            result.push_back(path);
            return;
        }

        if (start < candidates.size() && candidates[start] <= target) {
           path.push_back(candidates[start]);
           do_combine(candidates, start+1, target-candidates[start], result, path);
           path.pop_back();
           do_combine(candidates, start+1, target, result, path);
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> path;
        do_combine(candidates, 0, target, result, path);
        return result;
    }
};
