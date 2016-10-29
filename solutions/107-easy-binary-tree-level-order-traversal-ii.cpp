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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    	vector<vector<int>> results;
    	if (!root) return results;
    	vector<TreeNode *> level(1, root);

    	while (!level.empty()) {
    		vector<int> levelvals;
    		vector<TreeNode*> nextlevel;
    		for (auto node : level) {
    			levelvals.push_back(node->val);
    			if (node->left) nextlevel.push_back(node->left);
    			if (node->right) nextlevel.push_back(node->right);
    		}
    		swap(level, nextlevel);
    		results.push_back(levelvals);
    	}
    	reverse(results.begin(), results.end());
    	return results;
    }
};
