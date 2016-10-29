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
    ListNode* sortList(ListNode* head) {
    	if (!head || !head->next) return head;
    	ListNode *fast = head, *slow = head;
    	while (fast->next && fast->next->next) {
    		fast = fast->next->next;
    		slow = slow->next;
    	}
    	ListNode *half = slow->next;
    	slow->next = nullptr;
    	head = sortList(head);
    	half = sortList(half);

    	ListNode dummy(0);
    	ListNode *cur = &dummy;
    	while (head || half) {
    		if (!half || (head && head->val <= half->val)) {
    			cur->next = head;
    			cur = head;
    			head = head->next;
    		} else {
    			cur->next = half;
    			cur = half;
    			half = half->next;
    		}
    	}
    	return dummy.next;
    }
};
