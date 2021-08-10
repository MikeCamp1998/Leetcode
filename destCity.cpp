//https://leetcode.com/problems/destination-city/ 
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string res = "";
        unordered_map<string, int> map;
        
        for (int i = 0; i < paths.size(); i++) {
            map[paths[i][0]]++;
        }
        
        for (int i = 0; i < paths.size(); i++) {
            if (map[paths[i][1]] == 0) 
                res = paths[i][1];
        }
        
        return res;
    }
};