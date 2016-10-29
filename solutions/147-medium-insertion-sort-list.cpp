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
    ListNode* insertionSortList(ListNode* head) {
       if (!head || !head->next) return head;
       ListNode dummy(0);
       dummy.next = head;

       ListNode *c_prev = head, *c = head->next;
       while (c) {
    	   ListNode *s_prev = &dummy, *s = head;
    	   while (s->val <= c->val && s != c) {
    		   s_prev = s;
    		   s = s->next;
    	   }

    	   if (s != c) {
    		   ListNode *c_next = c->next;
    		   c_prev->next = c_next;
    		   s_prev->next = c;
    		   c->next = s;
    		   c = c_next;
    	   } else {
    		  c_prev = c;
    		  c = c->next;
    	   }
       }
       return dummy.next;
    }
};
