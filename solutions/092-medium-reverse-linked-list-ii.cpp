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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
    	ListNode dummy(0);
    	ListNode *prev = &dummy;
    	prev->next = head;
    	for (int i = 1; i < m; ++i) {
    		prev = prev->next;
    	}
    	ListNode *start = prev->next;

    	ListNode *end = start;
    	for (int i = 0; i < n - m; ++i) {
    		end = end->next;
    	}

    	ListNode *stop = end->next, *tail = stop;
    	for (; start != stop; ) {
    		ListNode *next = start->next;
    		start->next = tail;
    		tail = start;
    		start = next;
    	}
    	prev->next = tail;
    	return dummy.next;
    }
};
