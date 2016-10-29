//Your runtime beats 53.09% of cpp submissions.
//11506 / 11506 test cases passed.
//Status: Accepted
//Runtime: 76 ms
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x < 10) return true;
        
        int weight = 1;
        while (weight < x) {
            //extremly error-prone
            if (weight > INT_MAX/10) break;
            int new_weight = weight * 10; 
            if (new_weight <= x) 
                weight = new_weight;
            else
                break;//this might be neglected, leading to endless loop
        }

        for (; weight >= 10; weight /= 100) {
            int msd = x / weight;
            int lsd = x % 10;
            if (msd != lsd) return false;
            x %= weight;
            x /= 10;
        }

        return true;
    }
};


