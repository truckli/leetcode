/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution0 {
	bool isSymmetric(TreeNode *root1, TreeNode *root2) {
		if (root1 == root2) return true;//including if both nullptr
		if (!root1 || !root2) return false;
		if (root1->val != root2->val) return false;
		return isSymmetric(root1->left, root2->right) && isSymmetric(root1->right, root2->left);
	}
public:
    bool isSymmetric(TreeNode* root) {
       return !root || isSymmetric(root->left, root->right);
    }
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
    	if (!root) return true;
    	if (!root->left && !root->right) return true;
    	if (!root->left || !root->right) return false;

    	stack<TreeNode *> s1, s2;
    	s1.push(root->left);
    	s2.push(root->right);

    	while (!s1.empty()) {
    		if (s2.empty()) return false;
    		TreeNode *n1 = s1.top(), *n2 = s2.top();
    		s1.pop();
    		s2.pop();
    		if (n1->val != n2->val) return false;

    		if (n1->right && n2->left) {
    			s1.push(n1->right);
    			s2.push(n2->left);
    		} else if (n1->right || n2->left)
    			return false;

    		if (n2->right && n1->left) {
    			s1.push(n2->right);
    			s2.push(n1->left);
    		} else if (n2->right || n1->left)
    			return false;
    	}

    	if (!s2.empty()) return false;
    	return true;
    }
};
