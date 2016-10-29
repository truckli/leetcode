//timeout
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
               permute(nums, used, path, results)
               path.pop_back();
               used[i] = false;
           }
       }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> results;
        if (nums.empty()) return results;

        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<bool> used(n, false)
        vector<int> path;
        permute(nums, used, path, results)
        sort(results.begin(), results.end());
        results.erase(unique(results.begin(), results.end()), results.end());
        return results;

    }
};


//another attempt
//to optimize:
//for input [1,2,1']
//[1,1',2] and [1',1,2] should be identified as identical
//therefore, input should be interpreted as [1:twice, 2:once]
class Solution {
    void permute(unordered_map<int, int> &count_map, unordered_map<int, int> &used_map, vector<int> &path, vector<vector<int>> &results) {
        if (path.size() == n) {
            results.push_back(path);
            return;
        }

        for (auto it = count_map.begin(); it != count_map.end(); ++it) {
            int num = it->first, count = it->second;
            if (used_map[num] < count) {
                path.push_back(num);
                used_map[num]++;
                permute(count_map, used_map, path, results);
                path.pop_back();
                used_map[num]--;
            }
        }
    }
    int n;

    public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> results;
        if (nums.empty()) return results;

        n = nums.size();
        sort(nums.begin(), nums.end());
        unordered_map<int, int> count_map, used_map;
        for_each(nums.begin(), nums.end(), [&count_map, &used_map](int e) {
            if (count_map.find(e) == count_map.end()) {
                count_map[e] = 1;
                used_map[e] = 0;
            } else {
                count_map[e]++;
            }
        });
        vector<int> path;
        permute(count_map, used_map, path, results);
        return results;
    }
};







