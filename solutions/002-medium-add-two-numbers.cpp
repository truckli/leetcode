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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(-1);
        ListNode *cur = &dummy;
        int counter = 0;
        while (l1 || l2) {
            int x1 = 0, x2 = 0;
            if (l1) {
                x1 = l1->val;
                l1 = l1->next;
            }
            if (l2) {
                x2 = l2->val;
                l2 = l2->next;
            }
            cur->next = new ListNode(x1+x2+counter);
            cur = cur->next;
            counter = cur->val >= 10 ? 1 : 0; // error: >=10, not > 10
            if (counter) cur->val -= 10;
        }
        if (counter) {
            cur->next = new ListNode(1);
            cur = cur->next;
        }
        cur->next = NULL;
        return dummy.next; 
    }
};
