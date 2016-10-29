class Solution {
public:
    vector<int> getRow(int rowIndex) {
    	vector<int> row(rowIndex+1, 1);
    	for (int i = 0; i <= rowIndex; ++i) {
    		int prev = 1,  cur = 1;
    		for (int j = 1; j < i; ++j) {
    			cur = row[j];
    			row[j] += prev;
    			prev = cur;
    		}
    	}
    	return row;
    }
};
