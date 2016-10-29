/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    public:
        int countDepth(TreeNode *node, int depth) {
            if (!node) return depth;
            depth++;
            return max(countDepth(node->left, depth), countDepth(node->right, depth));
        }

        int maxDepth(TreeNode* root) {
            return countDepth(root, 0);
    }
};
