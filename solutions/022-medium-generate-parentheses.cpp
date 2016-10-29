class Solution {
    void generateParenthesis(int n, int in_stack, string path, vector<string> &results) {
        if (n == 0) {
            if (in_stack) {
                generateParenthesis(0, in_stack-1, path+")", results);
            } else {
                results.push_back(path);
            }
        } else {
            generateParenthesis(n-1, in_stack+1, path+"(", results);
            if (in_stack) {
                generateParenthesis(n, in_stack-1, path+")", results);
            }
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> results;
        generateParenthesis(n, 0, "", results);
        return results;
    }
};
