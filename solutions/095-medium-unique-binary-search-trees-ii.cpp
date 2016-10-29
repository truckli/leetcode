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
	vector<TreeNode*> genTree(int start, int end) {
        vector<TreeNode*> result;
		if (start >= end) {
			result.push_back(nullptr);
			return result;
		}
		for (int mid = start; mid < end; ++mid) {
			auto lefts = genTree(start, mid);
			auto rights = genTree(mid+1, end);
			for (auto ltree : lefts) {
				for (auto rtree : rights) {
                    TreeNode *root = new TreeNode(mid);
					root->left = ltree;
					root->right = rtree;
                    result.push_back(root);
				}
			}
		}

		return result;
	}

public:
    vector<TreeNode*> generateTrees(int n) {
        if (n < 1) return vector<TreeNode *>();
    	return genTree(1, n+1);
    }
};
