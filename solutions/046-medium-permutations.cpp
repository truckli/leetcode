class Solution {
    void permute(vector<int> &nums, vector<bool> &used, vector<int> &path, vector<vector<int>> &results) {
       int i = 0;
       int n = nums.size();
       if (path.size() == n) {
           results.push_back(path);
           return;
       }

       for (; i < n; ++i) {
           if (!used[i]) {
               used[i] = true;
               path.push_back(nums[i]);
               permute(nums, used, path, results);
               path.pop_back();
               used[i] = false;
           }
       }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        if (nums.empty()) return results;

        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<bool> used(n, false);
        vector<int> path;
        permute(nums, used, path, results);
        return results;
    }
};
