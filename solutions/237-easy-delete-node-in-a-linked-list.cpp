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
    void deleteNode(ListNode* node) {
        ListNode *nxt_node = node->next;
        node->val = nxt_node->val;
        node->next = nxt_node->next;
        delete nxt_node;
    }
};
