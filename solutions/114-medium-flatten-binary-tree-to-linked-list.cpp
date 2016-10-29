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
	TreeNode *_flatten(TreeNode *root) {
		if (!root) return nullptr;
		if (!root->left && !root->right) return root;
		TreeNode *ltree = root->left, *rtree = root->right;
		root->left = nullptr;
		TreeNode *ltail = _flatten(ltree);
		TreeNode *rtail = _flatten(rtree);

		if (!ltree) {
			root->right = rtree;
		} else if (!rtree) {
			root->right = ltree;
		} else {
			root->right = ltree;
			ltail->right = rtree;
		}

		return rtail?rtail:ltail;
	}
public:
	void flatten(TreeNode* root) {
		_flatten(root);
	}
};
