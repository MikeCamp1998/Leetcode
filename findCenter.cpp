class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        int res = 0;

        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
            res = edges[0][0];
        }
        else {
            res = edges[0][1];
        }
        
        return res;
    }
};

/*
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> map;
        int res = 0;
        
        for (int i = 0; i < edges.size(); i++) {
            map[edges[i][0]]++;
            map[edges[i][1]]++;
        }
        
        for (auto i : map) {
            if (i.second == edges.size()) {
                res = i.first;
            }
        }
        
        return res;
    }
};
*/