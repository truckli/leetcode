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
	int curval;
	bool first;
	bool inorder(TreeNode* node)
	{
		if (!node) return true;
		if (!inorder(node->left)) return false;
		if (!first && node->val <= curval) return false;
		first = false;
		curval = node->val;
		return inorder(node->right);
	}
public:
    bool isValidBST(TreeNode* root) {
    	curval = INT_MIN;
    	first = true;
    	return inorder(root);
    }
};
