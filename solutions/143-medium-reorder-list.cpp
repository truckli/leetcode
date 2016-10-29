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
    void reorderList(ListNode* head) {
    	if (!head || !head->next) return ;
    	/*the following is correct with length-3, length-2 inputs*/
    	ListNode *fast = head, *slow = head;
    	while (fast->next && fast->next->next) {
    		fast = fast->next->next;
    		slow = slow->next;
    	}

    	ListNode *pre = slow->next, *cur = pre->next;
    	slow->next = nullptr;
    	pre->next = nullptr;
    	while (cur) {
    		ListNode *next = cur->next;
    		cur->next = pre;
    		pre = cur;
    		cur = next;
    	}

    	ListNode *first = head, *second = pre;
    	while (second) {
    		ListNode *next1 = first->next, *next2 = second->next;
    		first->next = second;
    		second->next = next1;
    		first = next1;
    		second = next2;
    	}
    }
};
