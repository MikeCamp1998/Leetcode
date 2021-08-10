//https://leetcode.com/problems/count-the-number-of-consistent-strings/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> map;
        bool consistent = false;
        int res = 0;
        
        for (int i = 0; i < allowed.length(); i++) {
            map[allowed[i]] = 1;
        }
        
        for (int i = 0; i < words.size(); i++) {
            consistent = true;
            for (int j = 0; j < words[i].length(); j++) {
                if (map[words[i][j]] != 1) {
                    consistent = false;
                }
            }
            if (consistent) {
                res ++;
            }
        }
        
        return res;
    }
};