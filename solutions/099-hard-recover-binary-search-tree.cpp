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
	TreeNode *prev1 = nullptr;//first incorrect pair
	TreeNode *next1 = nullptr;//first incorrect pair
	TreeNode *prev2 = nullptr;//second incorrect pair may not exist
	TreeNode *next2 = nullptr;
	TreeNode *prev = nullptr;//previous node accessed
	bool stop = false;//premature stop flag
	void inorder(TreeNode *node) {//in-order traverse
		if (!node) return;
		inorder(node->left);
		if (prev) {
			if (prev->val > node->val) {
				if (!prev1) {
					prev1 = prev;
					next1 = node;
				} else {
					prev2 = prev;
					next2 = node;
					stop = true;
				}
			}
		}
		prev = node;
		inorder(node->right);
	}
public:
    void recoverTree(TreeNode* root) {
    	inorder(root);
    	if (prev1) {
    		if (next2) {
    			swap(prev1->val, next2->val);
    		} else
    			swap(prev1->val, next1->val);
    	}
    }
};
