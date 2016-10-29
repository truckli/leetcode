class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    	vector<vector<int>> results;
    	if (numRows == 0) return results;
    	vector<int> row(1, 1), newrow;
    	results.push_back(row);
    	for (int i = 1; i < numRows; ++i) {
    		newrow.resize(row.size()+1);
    		newrow[0] = 1;
    		for (int j = 1; j < row.size(); ++j) {
    			newrow[j] = row[j-1] + row[j];
    		}
    		newrow[row.size()] = 1;
    		swap(row, newrow);
    		results.push_back(row);
    	}
    	return results;
    }
};
