//https://leetcode.com/problems/finding-the-users-active-minutes/
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,vector<int>> map;
        vector<int> res(k, 0);
        
        for (int i = 0; i < logs.size(); i++) {
            if (!count(map[logs[i][0]].begin(), map[logs[i][0]].end(), logs[i][1]))   //tracking all unique minutes
                map[logs[i][0]].push_back(logs[i][1]);                                //for each user
        }
        
        for (auto i : map) {                          //iterating through map
            if (map[i.first].size() > 0)              //if an id has unique minutes
                res[map[i.first].size() - 1]++;       //take the size of that id's vector of unique minutes
        }                                             //and increment that placeholder in vector res by 1
        
        return res;
    }
};