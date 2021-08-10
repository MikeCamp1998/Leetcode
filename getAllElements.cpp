//https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
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
    vector<int> res;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        dfs(root1);
        dfs(root2);
        sort(res.begin(),res.end());
    
        return res;
    }
    
    void dfs(TreeNode* node) {
        if (node == NULL) return;
        
        dfs(node -> left);
        res.push_back(node -> val);
        dfs(node -> right);
    }
};