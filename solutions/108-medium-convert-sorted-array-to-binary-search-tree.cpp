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
	typedef vector<int>::iterator it;
    TreeNode* sortedArrayToBST(it start, it end) {
    	if (start == end) return nullptr;
    	auto mid = start + (end - start)/2;
    	TreeNode *root = new TreeNode(*mid);
    	root->left = sortedArrayToBST(start, mid);
    	root->right = sortedArrayToBST(mid+1, end);
    	return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    	return sortedArrayToBST(nums.begin(), nums.end());
    }
};
