class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));
        int val = 1;
        int up = 0, down = n - 1;
        while (up < down) {
            int len = down - up;
            for (int k = 0; k < len; ++k)
                result[up][up+k] = val++;
            for (int k = 0; k < len; ++k)
                result[up+k][down] = val++;
            for (int k = 0; k < len; ++k)
                result[down][down-k] = val++;
            for (int k = 0; k < len; ++k)
                result[down-k][up] = val++;
            up++, down--;
        }
        if (up == down) result[up][up] = val++;
        return result;
    }
};
