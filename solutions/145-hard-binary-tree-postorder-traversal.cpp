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
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int> result;
       if (!root) return result;
       stack<TreeNode *> s;

       TreeNode dummy(0);
       TreeNode *cur = root, *pre = &dummy;
       while (cur || !s.empty()) {
			if (pre != cur->left && pre != cur->right && cur->left) {
				s.push(cur);
				cur = cur->left;
			} else if (cur->right && pre != cur->right && (pre == cur->left || !cur->left)) {
				s.push(cur);
				cur = cur->right;
			} else { //return from right; return from left and no right; no children;
				result.push_back(cur->val);
				if (s.empty())
					break;
				pre = cur;
				cur = s.top();
				s.pop();
			}
		}

		return result;
	}
};
