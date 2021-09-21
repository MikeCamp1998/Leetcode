//https://leetcode.com/problems/n-ary-tree-preorder-traversal/
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }
        
        stack<Node*> stk;
        stk.push(root);
        while (!stk.empty()) {
            Node* cur = stk.top();
            stk.pop();
            result.push_back(cur -> val);
            for (int i = cur -> children.size() - 1; i >= 0; i--) {
                if (cur -> children[i] != nullptr) {
                    stk.push(cur -> children[i]);
                }
            }
        }
        return result;
    }
};

//recursive
/*
class Solution {
public:
    vector<int> res;
    
    vector<int> preorder(Node* root) {
        if (root) res.push_back(root -> val);
        dfs(root);
        
        return res;
    }
    
    void dfs(Node* root) {
        if (root == NULL) return;
        
        for (Node* i : root -> children) {
            res.push_back(i -> val);
            dfs(i);
        }
    }
};
*/