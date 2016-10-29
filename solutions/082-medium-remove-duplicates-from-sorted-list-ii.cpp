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
    	ListNode dummy(0);
    	ListNode *newlist = &dummy;
    	ListNode *cur = head;
    	while (cur){
     		if (cur->next == NULL || cur->val != cur->next->val) {
    			newlist->next = new ListNode(cur->val);
    			newlist = newlist->next;
    			cur = cur->next;
    		} else {
    			int val = cur->val;
    			cur = cur->next->next;
    			while (cur && cur->val == val) cur = cur->next;
    		}
    	}
    	return dummy.next;
    }
};
