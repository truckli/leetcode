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
    int sumNumbers(TreeNode* root) {
    	path_sum = 0;
    	sumPath(root, 0);
    	return path_sum;
    }
private:
    int path_sum;
    void sumPath(TreeNode* node, int prefix) {
    	if (!node) return;

    	prefix *= 10;
    	prefix += node->val;
    	if (!node->left && !node->right) {
    		path_sum += prefix;
    	} else {
    		sumPath(node->left, prefix);
    		sumPath(node->right, prefix);
    	}
    }
};
