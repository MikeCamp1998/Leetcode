//https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/
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
class FindElements {
public:
    bool exists = false;
    TreeNode* res;
    FindElements(TreeNode* root) {
        
        root -> val = 0;
        res = dfs(root);
        
    }
    
    bool find(int target) {
        exists = false;
        check(res, target);
        
        return exists;
    }
    
    TreeNode* dfs(TreeNode* root) {
        
        if (root == NULL) return NULL;
        
        int x = root -> val;
        
        if (root -> left != NULL) {
            root -> left -> val = 2 * x + 1;
        }
        
        if (root -> right != NULL) {
            root -> right -> val = 2 * x + 2;
        }
        
        dfs(root -> left);
        dfs(root -> right);
        
        return root;
    }
    
    void check(TreeNode* root, int target) {
        if (root == NULL) return;
        
        check(root -> left, target);
        
        if (root -> val == target) {
            exists = true;
        }
        
        check(root -> right, target);
    }
    
};

// Faster solution for find function using hashset

class FindElements {
public:
    unordered_set<int> set;

    FindElements(TreeNode* root) {
        root -> val = 0;
        recover(root);
    }
    
    bool find(int target) {
        return set.count(target);
    }
    
    void recover(TreeNode* root) {
        
        if (root == NULL) return;
        
        int x = root -> val;
        set.insert(x);
        
        if (root -> left != NULL) {
            root -> left -> val = 2 * x + 1;
        }
        
        if (root -> right != NULL) {
            root -> right -> val = 2 * x + 2;
        }
        
        recover(root -> left);
        recover(root -> right);
    }
};