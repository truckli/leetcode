/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
	stack<TreeNode *> s;
public:
	BSTIterator(TreeNode *root) {
		TreeNode *cur = root;
		while (cur) {
			s.push(cur);
			cur = cur->left;
		}
	}

	/** @return whether we have a next smallest number */
	bool hasNext() {
		return !s.empty();

	}

	/** @return the next smallest number */
	int next() {
		TreeNode *cur = s.top();
		s.pop();
		int curval = cur->val;
		cur = cur->right;
		while (cur) {
			s.push(cur);
			cur = cur->left;
		}
		return curval;
	}
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

