/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class SolutionBFS {
public:
    vector<int> rightSideView(TreeNode* root) {
    	queue<TreeNode *> curs, nexts;
    	vector<int> result;
    	if (!root) return result;
    	curs.push(root);

    	while (!curs.empty()) {
    		auto x = curs.front();
    		curs.pop();
    		if (x->left) nexts.push(x->left);
    		if (x->right) nexts.push(x->right);
    		if (curs.empty()) {
    			result.push_back(x->val);
    			curs.swap(nexts);
    		}
    	}

    	return result;
    }
};

class Solution : public SolutionBFS {};



