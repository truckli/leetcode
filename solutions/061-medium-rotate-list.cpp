/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    	if (!head) return NULL;
    	int n = 1;
    	ListNode *old_tail = head;
    	for (; old_tail->next; old_tail = old_tail->next, n++);
    	k %= n;
    	if (k == 0) return head;
    	ListNode *new_tail = head;
    	for (int i = 0; i < n-k-1; i++) new_tail = new_tail->next;
    	ListNode *new_head = new_tail->next;
    	old_tail->next = head;
    	new_tail->next = NULL;
    	return new_head;
    }
};
