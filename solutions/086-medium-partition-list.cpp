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
    ListNode* partition(ListNode* head, int x) {
    	ListNode dummy1(-1), dummy2(-1);
    	ListNode *smallp = &dummy1, *largep = &dummy2;
    	for (ListNode *cur = head; cur; cur = cur->next) {
    		if (cur->val < x) {
    			smallp->next = cur;
    			smallp = cur;
    		} else {
    			largep->next = cur;
    			largep = cur;
    		}
    	}
    	smallp->next = dummy2.next;
    	largep->next = NULL;//do not forget this
    	return dummy1.next;
    }
};
