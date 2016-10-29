class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> results;
        int n = digits.size();
        if (n == 0) return results;
        vector<string> tab = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string result;
        for (int i = 0; i < n; ++i) {
            result.push_back(tab[digits[i]-'2'][0]);
        }
        while (true) {
            results.push_back(result);
            int j = n - 1;
            while (j >= 0) {
                int item = digits[j] - '2';
                int counter = tab[item].find(result[j]);
                counter++;
                if (counter < tab[item].size()) {
                    result[j] = tab[item][counter];
                    break;
                }
                result[j] = tab[item][0];
                j--;
            }
            if (j < 0) return results;
        }
    }
};
