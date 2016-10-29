class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto it = nums.begin();
        while (it != nums.end() && *it != 0) ++it;
        if (it == nums.end()) return;
        auto jt = it + 1;
        while (jt != nums.end()) {
            if (*jt != 0) {
                *it++ = *jt;
            } 
            jt++;
        }
        while (it != nums.end()) {
            *it++ = 0;
        }
        
    }
};


//good answer from discussion
//
struct Solution {
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, j = 0; i < nums.size() ; ++ i)
            if (nums[i] != 0)
                swap(nums[i], nums[j++]);
    }
};
