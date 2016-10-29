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
	typedef vector<int>::iterator it;
	TreeNode *buildTree(it istart, it iend, it pstart, it pend) {
		if (istart == iend) return nullptr;
		auto postroot = prev(pend);

		auto inroot = find(istart, iend, *postroot);
		if (inroot == iend) return nullptr;
		auto postcut = next(pstart, inroot-istart);

		TreeNode *root = new TreeNode(*postroot);
		root->left = buildTree(istart, inroot, pstart, postcut);
		root->right = buildTree(next(inroot), iend, postcut, postroot);
		return root;
	}
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    	if (inorder.size() != postorder.size()) return nullptr;
    	return buildTree(inorder.begin(), inorder.end(), postorder.begin(), postorder.end());
    }
};
