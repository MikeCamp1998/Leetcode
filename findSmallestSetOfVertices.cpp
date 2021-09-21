//https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> res;
        unordered_map<int, int> map;
        
        for (int i = 0; i < edges.size(); i++) {
            map[edges[i][1]]++;
        }
        
        for (int i = 0; i < n; i++) {
            if (map[i] < 1) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};