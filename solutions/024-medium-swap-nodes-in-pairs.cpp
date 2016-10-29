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
    ListNode* swapPairs(ListNode* head) {
         ListNode dummy(-1), *cur = &dummy;
         dummy.next = head;
         ListNode *p1 = head;
         while (p1) {
             ListNode *p2 = p1->next;
             if (!p2) break;
             ListNode *tail = p2->next;
             cur->next = p2;
             p2->next = p1;
             p1->next = tail;
             cur = p1;
             p1 = tail;
         }
         return dummy.next;
    }
};
