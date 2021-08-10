//https://leetcode.com/problems/balance-a-binary-search-tree/
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
    vector<int> values;
    
    TreeNode* balanceBST(TreeNode* root) {
        
        getValuesBST(root);
        int start = 0;
        int end = values.size() - 1;
        TreeNode* res = createBST(values, start, end);
        
        return res;
    }
    
    void getValuesBST(TreeNode* root) {
        if (root == NULL)
            return;
        
        getValuesBST(root -> left);
        values.push_back(root -> val);
        getValuesBST(root->right);
    }
    
    TreeNode* createBST(vector<int> values, int start, int end) {
        if (start > end) return NULL;
        
        int midValue = (start + end) / 2;
        TreeNode* root = new TreeNode(values[midValue]);
        
        root -> left = createBST(values, start, midValue - 1);
        root -> right = createBST(values, midValue + 1, end);
        
        return root;
    }
};