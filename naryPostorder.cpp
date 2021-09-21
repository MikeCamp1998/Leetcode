//https://leetcode.com/problems/n-ary-tree-postorder-traversal/
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
    vector<int> postorder(Node* root) {
        if (!root) {
            return {};
        }
        stack<pair<Node *, int>> s;
        vector<int> res;
        s.emplace(root, 0);
        while (!s.empty()) {
            auto &[node, index] = s.top();
            if (index == node->children.size()) {
                res.push_back(node->val);
                s.pop();
            } else {
                s.emplace(node->children[index++], 0);
            }
        }
        return res;
    }
};

//recursive solution
/* 
class Solution {
public:
    vector<int> res;
    
    vector<int> postorder(Node* root) {
        dfs(root);
        if (root != NULL) res.push_back(root->val);
        return res;
    }
    
    void dfs(Node* root) {
        if (root == NULL) {
            return;
        }
        
        for (Node* i : root->children) {
            dfs(i);
            res.push_back(i->val);
        }
    }
};
*/