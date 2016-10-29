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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || n <= 0) return head;

        ListNode *pioneer = head;
        for (int i = 0; i < n; ++i) {
            if (pioneer) pioneer = pioneer->next;
            else
                return NULL;
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode *prev = &dummy;
        while (pioneer) {
            pioneer = pioneer->next;
            prev = prev->next;
        }

        prev->next = prev->next->next;
        //delete(prev->next);
        //cannot really delete it
        //in java, memory leak is not a concern

        return dummy.next;
    }
};

/*
 *
 * https://leetcode.com/discuss/21104/simple-java-solution-in-one-pass
 * In my opinion, this is not a valid solution. Supposing the length of this list is l, this solution will visit the previous (l-n) elements twice, which has no difference with first getting the length of this list and in the SECOND pass find the index of the node to delete.
 */
