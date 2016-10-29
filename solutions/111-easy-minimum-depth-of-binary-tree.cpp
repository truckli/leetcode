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
    int minDepth(TreeNode* root) {
    	if (!root) return 0;
    	if (!root->left && !root->right) return 1;
    	int rl = INT_MAX, ll = INT_MAX;/*not 0 !! */
    	if (root->left) ll = minDepth(root->left);
    	if (root->right) rl = minDepth(root->right);
    	return min(rl, ll) + 1;
    }
};
