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
    vector<int> preorderTraversal(TreeNode* root) {
       stack<TreeNode *> s;
       vector<int> result;
       if (!root) return result;
       s.push(root);

       while (!s.empty()) {
    	   TreeNode *node = s.top();
    	   result.push_back(node->val);
    	   s.pop();
    	   if (node->right) s.push(node->right);
    	   if (node->left) s.push(node->left);
       }
       return result;
    }
};
