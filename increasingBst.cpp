//https://leetcode.com/problems/increasing-order-search-tree/
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
    vector<int> vals;
    
    TreeNode* increasingBST(TreeNode* root) {
        
        dfs(root);
        TreeNode* res = new TreeNode(vals[0]);
        TreeNode* curr = res;
        
        for (int i = 1; i < vals.size(); i++) {
            TreeNode* newNode = new TreeNode(vals[i]);
            curr -> right = newNode;
            curr = curr -> right;
        }
        
        return res;
    }
    
    void dfs(TreeNode* root) {
        if (root == NULL) return;
        
        dfs(root -> left);
        vals.push_back(root -> val);
        dfs(root -> right); 
    }
};

//Faster Way O(n)
class Solution {
public:
    TreeNode* res;
    TreeNode* curr;
    
    TreeNode* increasingBST(TreeNode* root) {
        if (root == NULL) return NULL;
        
        increasingBST(root -> left);
        
        if (res == NULL) {
            res = new TreeNode(root -> val);
            curr = res;
        }
        else {
            curr -> right = new TreeNode(root -> val);
            curr = curr -> right;
        }

        increasingBST(root -> right); 
        
        return res;
    }

};