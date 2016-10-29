/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution_naive { //uses extra space for a map
public:
	RandomListNode *copyRandomList(RandomListNode *head) {
		unordered_map<RandomListNode *, RandomListNode *> copy_map;
		RandomListNode dummy(0), *to = &dummy;
		for (RandomListNode *from = head; from; from = from->next) {
			to->next = new RandomListNode(from->label);
			to = to->next;
			copy_map[from] = to;
		}
		to->next = nullptr;

		to = dummy.next;
		for (RandomListNode *from = head; from;
				from = from->next, to = to->next) {
			if (from->random)
				to->random = copy_map[from->random];
		}
		return dummy.next;
	}
};

class Solution {
public:
	RandomListNode *copyRandomList(RandomListNode *head) {
		if (!head)
			return nullptr;

		for (RandomListNode *from = head; from;) {
			RandomListNode *to = new RandomListNode(from->label);
			to->next = from->next;
			from->next = to;
			from = to->next;
		}
		RandomListNode *newhead = head->next;
		for (RandomListNode *from = head, *to = newhead; from; ) {
			if (from->random)
				to->random = from->random->next;
			from = to->next;
			if (from)
			    to = from->next;

		}

		for (RandomListNode *from = head, *to = newhead; from; from =
				from->next, to = to->next) {
			from->next = to->next;
			if (from->next)
				to->next = from->next->next;
			else
				to->next = nullptr;
		}

		return newhead;
	}
};
