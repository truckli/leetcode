class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        if (nums.size() < 3) return results;

        sort(nums.begin(), nums.end());
        unordered_map<int, int> valpos;

        // record the last position nums[i] appears
        for (int i = 0; i < nums.size(); ++i) {
            valpos[nums[i]] = i;
        }

        for (int i = 0; i+2 < nums.size(); i = valpos[nums[i]]+1) {
            for (int j = i+1; j+1 < nums.size(); j = valpos[nums[j]]+1) {
                int target = 0 - nums[i] - nums[j];
                if (valpos.find(target) != valpos.end() && valpos[target] > j) {
                    results.push_back(vector<int>{nums[i], nums[j], target});
                }
            }
        }

        return results;
    }
};


class Solution {
    void move2next(vector<int> nums, int &cur) {
        int curval = nums[cur++];
        while (cur < nums.size() && curval == nums[cur]) cur++;
    }
    void move2prev(vector<int> nums, int &cur) {
        int curval = nums[cur--];
        while (cur >= 0 && curval == nums[cur]) cur--;
    }

public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        if (nums.size() < 3) return results;

        sort(nums.begin(), nums.end());
        //unique(nums.begin(), nums.end());

        for (int i = 0; i+2 < nums.size() && nums[i] <= 0; ) {
            int target = -nums[i];
            for (int j = i+1, k = nums.size()-1; j < k; ) {
                int sum2 = nums[j] + nums[k];
                if (sum2 > target) {
                    move2prev(nums, k);
                } else if (sum2 < target) {
                    move2next(nums, j);
                } else {
                    results.push_back(vector<int>{nums[i], nums[j], nums[k]});
                    move2prev(nums, k);
                    move2next(nums, j);
                }
            }
            move2next(nums, i);
        }

        return results;
    }
};





