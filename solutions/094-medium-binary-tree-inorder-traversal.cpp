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
    vector<int> inorderTraversal(TreeNode* root) {
    	vector<int> result;
    	stack<TreeNode *> s;
    	TreeNode *node = root;
    	while (true) {
    		if (node) {
    			s.push(node);
    			node = node->left;
    		} else {
    			if (s.empty()) break;
//    			if node is left of its parent, s.top() would be its parent
//    			if node is a right child, s.top() would be its ordinally smallest ancestor
    			node = s.top();
    			s.pop();
    			result.push_back(node->val);
    			node = node->right;
    		}
    	}
    	return result;
    }
};
