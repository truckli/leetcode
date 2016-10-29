class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        unordered_map<int, int> valmap;
        for (int i = 0; i < nums.size(); ++i) {
            valmap[nums[i]] = i; 
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (valmap.find(target - nums[i]) != valmap.end()) {
                int pos1 = i + 1, pos2 = valmap[target-nums[i]]+1;
                if (pos1 < pos2) {
                    return vector<int>{pos1, pos2};
                }
                if (pos1 > pos2) {
                    return vector<int>{pos2, pos1};
                }
            }
        }
        return result;
    }
};
