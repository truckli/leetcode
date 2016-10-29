/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    vector<TreeNode *> path;
    vector<TreeNode *> ppath, qpath;
    void traverse(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (!root) return;
        path.push_back(root);
        if (root == p) ppath = path;
        if (root == q) qpath = path;
        traverse(root->left, p, q);
        traverse(root->right, p, q);
        path.pop_back();

    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        traverse(root, p, q);
        if (ppath.empty() || qpath.empty()) return nullptr;
        auto pit = ppath.begin(), qit = qpath.begin();
        for (; pit != ppath.end(), qit != qpath.end(); pit++, qit++) {
            if (*pit != *qit) break;
        }
        --pit;
        return *pit;
    }
};

//the above Solution fails to take into account the fact root is a BST.
//


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return NULL;
        }
        // check if the current value is larger than both nodes , go left
        if(p->val < root->val && q->val < root->val){
            lowestCommonAncestor(root->left , p , q);
         // go right
        }else if(p->val > root->val && q->val > root->val){
            lowestCommonAncestor(root->right , p , q);
        }// my LCA 
        else{
            return root;
        }
    }
};

// the above Solution fails to recognize that node values can be identical making branching harder
//
//
//

//another Solution that does not require root to be a bst:
//go left, or go right. if a branch fails to contain both nodes, return nullptr
//
//



