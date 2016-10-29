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
	//As can be proved, after collision of the fast and slow pointers,
	//another slow pointer that starts right now from list head will meet the previous slow pointer at cycle entrance.
    ListNode *detectCycle(ListNode *head) {
       ListNode *fast = head, *slow = head;
       while (true) {
    	   if (!fast) return nullptr;
    	   fast = fast->next;
    	   if (!fast) return nullptr;
    	   fast = fast->next;
    	   slow = slow->next;
    	   if (fast == slow) break;
       }
       ListNode *slow2 = head;
       while (slow2 != slow) {
    	   slow2 = slow2->next;
    	   slow = slow->next;
       }
       return slow;
    }
};
