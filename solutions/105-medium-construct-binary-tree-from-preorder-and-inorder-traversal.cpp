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
	vector<int> preorder;
	vector<int> inorder;
    TreeNode* buildTree(int pstart, int pend, int istart, int iend) {
    	if (pstart >= pend || istart >= iend) return nullptr;
    	int rootpos;
    	for (rootpos = istart; rootpos < iend; ++rootpos) {
    		if (inorder[rootpos] == preorder[pstart]) break;
    	}
    	if (rootpos == iend) return nullptr;

    	int leftlen = rootpos - istart;
    	TreeNode *root = new TreeNode(preorder[pstart]);
    	root->left = buildTree(pstart+1, pstart+1+leftlen, istart, rootpos);
    	root->right = buildTree(pstart+1+leftlen, pend, rootpos+1, iend);
    	return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    	this->preorder = preorder;
    	this->inorder = inorder;
    	return buildTree(0, preorder.size(), 0, inorder.size());
    }
};
