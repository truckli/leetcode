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
    vector<vector<int>> levelOrder(TreeNode* root) {
    	vector<vector<int>> results;
    	if (!root) return results;
    	vector<TreeNode *> level(1, root);
    	vector<TreeNode *> nextlevel;
    	vector<int> levelvals;
    	while (!level.empty()) {
    		for (auto node : level) {
    			levelvals.push_back(node->val);
    			if (node->left) nextlevel.push_back(node->left);
    			if (node->right) nextlevel.push_back(node->right);
    		}
    		results.push_back(levelvals);
    		level = nextlevel;
    		nextlevel.clear();
    		levelvals.clear();
    	}
    	return results;
    }
};
