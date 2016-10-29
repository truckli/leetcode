/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
	ListNode *find_mid(ListNode *head) {
		int len = 1;
		for (ListNode *node = head->next; node; node = node->next, len++);
		int halflen = len/2 - 1;
		ListNode *lefttail = head;
		for (int i = 0; i < halflen; ++i) lefttail = lefttail->next;
		return lefttail;
	}
public:
    TreeNode* sortedListToBST(ListNode* head) {
    	if (!head) return nullptr;
    	if (!head->next) return new TreeNode(head->val);
    	ListNode *lefttail = find_mid(head);
    	ListNode *mid = lefttail->next;
    	lefttail->next = nullptr;
    	TreeNode *root = new TreeNode(mid->val);
    	root->left = sortedListToBST(head);
    	root->right = sortedListToBST(mid->next);
    	lefttail->next = mid;
    	return root;
    }
};
