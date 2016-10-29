/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
    	vector<vector<int>> results, lresults, rresults;
    	if (!root) return results;
    	if (!root->left && !root->right) {
    		if (root->val == sum) {
    			results.push_back(vector<int>(1, sum));
    		}
    		return results;
    	}

    	if (root->left) {
    		lresults = pathSum(root->left, sum - root->val);
    	}
    	if (root->right) {
    		rresults = pathSum(root->right, sum - root->val);
    	}

    	for (auto path: lresults) {
    		path.insert(path.begin(), root->val);
    		results.push_back(path);
    	}
    	for (auto path: rresults) {
    		path.insert(path.begin(), root->val);
    		results.push_back(path);
    	}

    	return results;
        
    }
};
