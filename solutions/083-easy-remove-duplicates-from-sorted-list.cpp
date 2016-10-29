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
    ListNode* deleteDuplicates(ListNode* head) {
    	if (!head) return NULL;
    	ListNode *newlist = new ListNode(head->val), *last = newlist;
    	for (ListNode *cur = head->next; cur; cur = cur->next) {
    		if (cur->val != last->val) {
    			last->next = new ListNode(cur->val);
    			last = last->next;
    		}
    	}
    	return newlist;
    }
};
