//https://leetcode.com/problems/insert-into-a-binary-search-tree/
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) return new TreeNode(val);
        TreeNode* curr = root;
        
        while (curr != NULL) {
            if (val > curr -> val) {
                if (curr -> right == NULL) {
                    curr -> right = new TreeNode(val);
                    break;
                }
                curr = curr -> right;
            } 
            else {
                if (curr -> left == NULL) {
                    curr -> left = new TreeNode(val);
                    break;
                }
                curr = curr -> left;
            }
        }
        
        return root;
    }
};