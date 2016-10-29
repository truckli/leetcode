/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution0 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    	if (!headA || !headB) return nullptr;

    	ListNode *pA = headA;
    	int stepA = 0;
    	while (pA->next) {
    		pA = pA->next;
    		stepA++;
    	}

    	ListNode *pB = headB;
    	int stepB = 0;
    	while (pB->next) {
    		pB = pB->next;
    		stepB++;
    	}

    	if (pA != pB) return nullptr;

    	if (stepA < stepB) {
    		swap(stepA, stepB);
    		swap(headA, headB);
    	}

    	while (stepA > stepB) {
    		headA = headA->next;
    		stepA--;
    	}

    	while (headA != headB) {
    		headA = headA->next, headB = headB->next;
    	}
    	return headA;
    }
};


class Solution { // a smart trick
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    	ListNode *p = headA, *q = headB;
    	while (p != q) {
    		p = p ? p->next : headB;
    		q = q ? q->next : headA;
    	}
    	return p;
    }
};

