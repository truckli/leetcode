class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return;
        int m = matrix.size(), n = matrix[0].size();

        bool left_zero = false, up_zero = false;
        for (int j = 0; j < n; ++j) if (matrix[0][j] == 0) up_zero = true;
        for (int i = 0; i < m; ++i) if (matrix[i][0] == 0) left_zero = true;

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;
            }
        }

        if (up_zero)
            for (int j = 0; j < n; ++j) matrix[0][j] = 0;

        if (left_zero)
            for (int i = 0; i < m; ++i) matrix[i][0] = 0;
    }
};
