class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>map;
        for(int i=0;i<g.size();i++)
        {
			map[g[i]].push_back(i);
			if(map[g[i]].size()==g[i])
            {
                ans.push_back(map[g[i]]);
                map[g[i]].clear();
            }
        }
        return ans; 
    }
};