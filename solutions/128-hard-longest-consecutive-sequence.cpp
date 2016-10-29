class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    	unordered_set<int> present(nums.begin(), nums.end());
    	int max_range = INT_MIN;
    	while (!present.empty()) {
    		auto it = present.begin();
    		present.erase(it);
    		int neighbor = *it + 1;
    		int range = 1;
    		while (present.find(neighbor) != present.end()) {
    			present.erase(neighbor);
    			range++;
    			neighbor++;
    		}
    		neighbor = *it - 1;
    		while (present.find(neighbor) != present.end()) {
    			present.erase(neighbor);
    			range++;
    			neighbor--;
    		}

    		max_range = max(max_range, range);
    	}

    	return max_range;
    }
};
