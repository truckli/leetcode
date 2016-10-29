class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        int steps = 0;
        int reach = nums[0];
        int i = 1;
        while (true) {
            steps++;
            int new_reach = reach;
            for (; i <= reach; ++i) {
                if (i == nums.size() - 1) return steps;
                new_reach = max(new_reach, i+nums[i]);
            }
            if (new_reach == reach) return -1;
            reach = new_reach;
        }
    }
};
