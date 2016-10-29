//40ms: sort solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() <= 1) return false;
        sort(nums.begin(), nums.end());
        auto it = nums.begin(), jt = it + 1;
        for (; jt != nums.end(); ++jt, ++it) {
            if (*it == *jt) return true;
        }
        return false;
    }
};


//52ms: hashtable solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ht;
        for (auto i = nums.begin(); i != nums.end(); ++i) {
            if (ht.find(*i) != ht.end()) {
                return true;
            }
            ht.insert(*i);
        }
        return false;
    }
};

