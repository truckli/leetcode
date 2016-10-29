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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    	vector<vector<int>> results;
    	if (!root) return results;

    	vector<TreeNode *> level, nextlevel;
    	vector<int> levelvals;
    	bool backward = false;
    	level.push_back(root);

    	while (!level.empty()) {
    		for (auto node : level) {
    			levelvals.push_back(node->val);
    			if (node->left) nextlevel.push_back(node->left);
    			if (node->right) nextlevel.push_back(node->right);
    		}

    		level = nextlevel;
    		nextlevel.clear();
    		if (backward) reverse(levelvals.begin(), levelvals.end());
    		backward = !backward;
    		results.push_back(levelvals);
    		levelvals.clear();
    	}
    	return results;
    }
};
