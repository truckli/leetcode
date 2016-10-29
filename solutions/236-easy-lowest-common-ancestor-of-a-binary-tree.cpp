// Solution 2


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
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        /*Let us change our perspective of problem lowestCommonAncestor,
            from: return LCA of a given set of nodes which must be in the tree 
            to: return LCA of the subset of a given set of nodes that happen to be in the tree
            */
        if (!root) return nullptr;
        if (root == p || root == q) return root;
        TreeNode *lans = lowestCommonAncestor(root->left, p, q);
        TreeNode *rans = lowestCommonAncestor(root->right, p, q);
        if (lans && rans) return root;
        if (lans) return lans;
        return rans;
    }
    
};


// Solution 1
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
public:
    TreeNode *findPath(TreeNode *root, TreeNode *p, vector<TreeNode*> &path) {
        if (!root) return nullptr;
        path.push_back(root);
        if (root == p) return root;
        TreeNode *found = findPath(root->left, p, path);
        if (!found) found = findPath(root->right, p, path);
        if (found) return root;
        path.pop_back();
        return nullptr;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || !p || !q) return nullptr;
        vector<TreeNode *> ppath, qpath;
        //get ancestor queues for p and q
        findPath(root, p, ppath);
        findPath(root, q, qpath);
        //analyze their ancestors
        auto i = ppath.begin(), j = qpath.begin();
        while (i != ppath.end() && j != qpath.end()) {
            if (*i == *j) {
                ++i, ++j;
            } else {
                break;
            }
        }
        
        return *--i;
    }
    
};




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
    //has_p is true if p in tree root. lca returns the subproblem in a subtree
    //if a solution is found in a subtree, then the solution also applies to the parent tree
    TreeNode* lca(TreeNode *root, TreeNode *p, TreeNode *q, bool &has_p, bool &has_q) {
        if (!root) {
            has_p = has_q = false;
            return nullptr;
        }
        bool has_pl, has_pr, has_ql, has_qr;
        TreeNode *lans = lca(root->left, p, q, has_pl, has_ql), *rans = lca(root->right, p, q, has_pr, has_qr);
        if (lans) return lans;
        if (rans) return rans;
        has_p = has_pl || has_pr || (root == p);
        has_q = has_ql || has_qr || (root == q);
        if (has_p && has_q) return root;
        return nullptr;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool has_p, has_q;
        return lca(root, p, q, has_p, has_q);
    }
};


