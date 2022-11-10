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

/// iterative approach

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> inor;
        stack<TreeNode*> stc;
        TreeNode* temp=root;
        
        while(temp or !stc.empty())
        {
            while(temp)
            {
                stc.push(temp);
                temp=temp->left;
            }
            
            temp=stc.top();
            inor.push_back(temp->val);
            temp=temp->right;
            stc.pop();
        }
        
        return inor;
    }
};

/// recursive approach

class Solution {
public:
    void inorderTrav(TreeNode* node, vector<int>& v)
    {
        if(node==NULL)
            return;
        
        inorderTrav(node->left, v);
        v.push_back(node->val);
        inorderTrav(node->right, v);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> inor;
        inorderTrav(root, inor);
        return inor;
    }
};