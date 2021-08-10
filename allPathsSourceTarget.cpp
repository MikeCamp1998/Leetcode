//https://leetcode.com/problems/all-paths-from-source-to-target/ 
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    
    void dfs(vector<vector<int>>& graph, int source, int target) {
        tmp.push_back(source);
        
        if (source == target) {  //This means we have completed a single path
            res.push_back(tmp);
        }
        
        else {
            for (int node: graph[source]) {   //This is now spreading the search accross the nodes we can currently visit
                dfs(graph, node, target);
            }
        }
        
        tmp.pop_back();  //This pops away a node once we have already determined all the paths for it
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int target = graph.size() - 1;
        int source = 0;
        dfs(graph, source, target);
        return res;
    }
};