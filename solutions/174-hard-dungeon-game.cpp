class Solution {
public:
    int calculateMinimumHP(vector<vector<int> > &dungeon) {
        int m = dungeon.size(), n = dungeon[0].size();
        vector<int> h(n);//rotating array. min init health point needed to start here
        h[n-1] = max(1, 1 - dungeon[m-1][n-1]);
        for (int j = n-2; j >= 0; --j) {
        	h[j] = max(1, h[j+1] - dungeon[m-1][j]);
        }

        for (int i = m-2; i >= 0; --i) {
        	h[n-1] = max(1, h[n-1] - dungeon[i][n-1]);
        	for (int j = n-2; j >= 0; --j) {
        		h[j] = min(h[j], h[j+1]) - dungeon[i][j];
        		h[j] = max(1, h[j]);
        	}
        }
        return h[0];
    }
};
