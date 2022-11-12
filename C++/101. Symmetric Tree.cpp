/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/// recursive approach

class Solution {
public:
    bool compare(TreeNode* r1, TreeNode* r2)
    {
        if(!r1 and !r2) return true;
        if((!r1 and r2) or (r1 and !r2)) return false;
        if(r1->val==r2->val)
        {
            return compare(r1->left, r2->right) and compare(r1->right, r2->left);
        }
        else return false;
        
    }
    
    bool isSymmetric(TreeNode* root) {
        
        return compare(root->left, root->right);
    }
};

/// iterative approach (using bfs)

