class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> results;
		int n = nums.size();
		if (n < 4) return results;
		sort(nums.begin(), nums.end());
		
        unordered_multimap<int, pair<int, int>> vpos;
		for (int i = 0; i+1 < n; ++i) {
			for (int j = i+1; j < n; j++)
                vpos.emplace(nums[i]+nums[j], make_pair(i, j));
		}
		
		for (int i = 0; i+3 < n && nums[i] <= 0; ++i) {
			for (int j = i+1; j+2 < n; j++) {
				int sum2 = target - nums[i] - nums[j];
				auto range = vpos.equal_range(sum2);
				for (auto it = range.first; it != range.second; ++it) {
					if (it->second->first > j) {
						results.push_back(vector<int>{nums[i], nums[j], nums[it->second->first], nums[it->second->second]});
					}
				}
			}
		}
		sort(results.begin(), results.end());
		results.resize(results.begin(), unique(results.begin(), results.end()));
		return results;

	}
};
