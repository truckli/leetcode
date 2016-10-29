/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        TreeLinkNode *level = root;
    	while (true) {
    		TreeLinkNode dummy(0), *cur = &dummy;
    		for (; level; level = level->next) {
    			if (level->left) {
    				cur->next = level->left;
    				cur = level->left;
    			}
    			if (level->right) {
    				cur->next = level->right;
    				cur = level->right;
    			}
    		}
    		level = dummy.next;
    		if (!level) break;
    	}
    }
};
