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
	ListNode* removeElements(ListNode* head, int val) {
		ListNode dummy(-1);
		dummy.next = head;
		ListNode *prev = &dummy;
		while (prev->next) {
			ListNode *cur = prev->next;
			if (cur->val == val)
				prev->next = cur->next;
			else
				prev = cur;
		}
		return dummy.next;
	}
}
;
