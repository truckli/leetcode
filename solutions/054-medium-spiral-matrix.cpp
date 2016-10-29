class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) return result;
        int n = matrix.size(), m = matrix[0].size();
        result.reserve(n*m);
        int up = 0, down = n - 1, left = 0, right = m - 1;
        while (up < down && left < right) {
           int vlen = down - up, hlen = right - left;
           for (int i = 0; i < hlen; ++i) {
               result.push_back(matrix[up][left+i]);
           }
           for (int i = 0; i < vlen; ++i) {
               result.push_back(matrix[up+i][right]);
           }
           for (int i = 0; i < hlen; ++i) {
               result.push_back(matrix[down][right-i]);
           }
           for (int i = 0; i < vlen; ++i) {
               result.push_back(matrix[down-i][left]);
           }
           up++, down--, left++, right--;
        }

        if (up == down) {
            while (left <= right) result.push_back(matrix[up][left++]);
        } else if (left == right) {
            while (up <= down) result.push_back(matrix[up++][left]);
        }

        return result;
    }
};
