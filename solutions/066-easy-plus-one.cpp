class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int counter = 1;
        for (int i = digits.size() - 1; i >= 0; --i) {
            digits[i] += counter;
            if (digits[i] >= 10) {
                counter = digits[i] / 10;
                digits[i] %= 10;
            } else
                counter = 0;
        }
        if (counter) {
            digits.insert(digits.begin(), counter);
        }
        return digits; 
    }
};
