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
    bool isBalanced(TreeNode* root, int &height) {
    	if (!root) {
    		height = 0;
    		return true;
    	}

    	int lh, rh;
    	if (!isBalanced(root->left, lh)) return false;
    	if (!isBalanced(root->right, rh)) return false;
    	if (max(lh, rh) - min(lh, rh) > 1) return false;
    	height = max(lh, rh) + 1;
    	return true;
    }
public:
    bool isBalanced(TreeNode* root) {
    	int height;
    	return isBalanced(root, height);
    }
};
