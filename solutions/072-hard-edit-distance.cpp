//O(nm) space, rotating array
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        if (n == 0) return m;
        if (m == 0) return n;
        vector<vector<int>> distance(m+1, vector<int>(n+1));
        for (int j = 0; j <= n; ++j) {
            distance[0][j] = j;
        }
        for (int i = 1; i <= m; ++i) {
            distance[i][0] = i;
            for (int j = 1; j <= n; ++j) {
                if (word1[j-1] == word2[i-1]) {
                    distance[i][j] = distance[i-1][j-1];
                } else {
                    distance[i][j] = 1 + min(min(distance[i-1][j], distance[i][j-1]), distance[i-1][j-1]);
                }
            }
        }

        return distance[m][n];
    }
};

//O(n) space, rotating array
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        if (n == 0) return m;
        if (m == 0) return n;
        vector<int> distance(n+1);
        for (int j = 0; j <= n; ++j) {
            distance[j] = j;
        }

        for (int i = 1; i <= m; ++i) {
            int left_up = distance[0];
            distance[0] = i;
            for (int j = 1; j <= n; ++j) {
                int cur;
                if (word1[j-1] == word2[i-1]) {
                    cur = left_up;
                } else {
                    cur = 1 + min(min(left_up, distance[j-1]), distance[j]);
                }
                left_up = distance[j];
                distance[j] = cur;
            }
        }

        return distance[n];
    }
};
