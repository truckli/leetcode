//a straight forward but puzzling solution
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int up = 0, down = n - 1, left = 0, right = n - 1;
        while (up < down) {
            left = up;
            right = down;
            int len = down - up;
            for (int k = 0; k < len; ++k) {
                int tmp = matrix[up][left+k];
                matrix[up][left+k] = matrix[down-k][left];
                matrix[down-k][left] =  matrix[down][right-k];
                matrix[down][right-k] = matrix[up+k][right];
                matrix[up+k][right] = tmp;
           }
            up++, down--;
        }
    }
};

class Solution {
    void reverse_vertical(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int half = n / 2;
        for (int i = 0; i < half; ++i) {
            for (int j = 0; j < n; ++j) {
                swap(matrix[i][j], matrix[n-1-i][j]);
            }
        }
    }
    //revserse around principal diagonal
    void reverse_main(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

public:
    void rotate(vector<vector<int>>& matrix) {
        reverse_vertical(matrix);
        reverse_main(matrix);
    }
};


class Solution {
    void reverse_horizontal(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int half = n / 2;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < half; ++j) {
                swap(matrix[i][j], matrix[i][n-1-j]);
            }
        }
    }
    //revserse around minor diagonal
    void reverse_sub(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n-1-i; ++j) {
                swap(matrix[i][j], matrix[n-1-j][n-1-i]);
            }
        }
    }

public:
    void rotate(vector<vector<int>>& matrix) {
        reverse_horizontal(matrix);
        reverse_sub(matrix);
    }
};

