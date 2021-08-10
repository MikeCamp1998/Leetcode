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
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        if (preorder.empty())
            return NULL;
        
        vector<int> smaller, greater;
        int root_val = preorder[0];
        
        for (int i = 1; i < preorder.size(); i++) {
            if (preorder[i] < root_val)
                smaller.push_back(preorder[i]);
            else 
                greater.push_back(preorder[i]);
        }            
        
        TreeNode* root = new TreeNode(root_val);
        root -> left = bstFromPreorder(smaller);
        root -> right = bstFromPreorder(greater);
            
        return root;
    }
};

/*
    int i = 0;
    
    TreeNode* bstFromPreorder(vector<int>& A, int bound = INT_MAX) {
        if (i == A.size() || A[i] > bound) return NULL;
        TreeNode* root = new TreeNode(A[i++]);
        root->left = bstFromPreorder(A, root->val);
        root->right = bstFromPreorder(A, bound);
        return root;
    }
    
*/