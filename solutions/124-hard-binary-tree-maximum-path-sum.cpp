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
	int answer;
	int find_answer(TreeNode *root) {
		if (!root) {
			return INT_MIN;
		}

		int l_rootway = find_answer(root->left);
		int r_rootway = find_answer(root->right);
		int rootway = root->val;

		int answer_through_root = root->val;
		if (l_rootway> 0) {
			answer_through_root += l_rootway;
			rootway = max(rootway, root->val + l_rootway);
		}
		if (r_rootway > 0) {
			answer_through_root += r_rootway;
			rootway = max(rootway, root->val + r_rootway);
		}

		answer = max(answer, answer_through_root);
		return rootway;
	}
public:
	int maxPathSum(TreeNode* root) {
		answer = INT_MIN;
		find_answer(root);
		return answer;
	}
};
