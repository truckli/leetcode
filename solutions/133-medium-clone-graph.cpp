/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution_naive {
	unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> copies;
public:
	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
		if (!node)
			return nullptr;
		if (copies.find(node) != copies.end())
			return copies[node];

		UndirectedGraphNode *newnode = new UndirectedGraphNode(node->label);
		copies[node] = newnode;

		for (auto neighbor : node->neighbors) {
			if (neighbor == node)
				newnode->neighbors.push_back(newnode);
			else
				newnode->neighbors.push_back(cloneGraph(neighbor));
		}
		return newnode;
	}
};

