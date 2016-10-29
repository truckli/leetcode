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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k <= 1) return head;
        ListNode dummy(-1), *prev = &dummy;
        dummy.next = head;

        while (true) {
            ListNode *seg_tail = prev;
            for (int i = 0; i < k; ++i) {
                seg_tail = seg_tail->next;
                if (!seg_tail) return dummy.next;
            }
            ListNode *seg_head = prev->next;
            head = seg_tail->next;

            ListNode *tail = seg_tail->next;
            for (ListNode *cur = seg_head; cur != head; )
            {
                ListNode *tmp = cur->next;
                cur->next = tail;
                tail = cur;
                cur = tmp;
            }
            prev->next = seg_tail;
            prev = seg_head;
        }
    }
};
