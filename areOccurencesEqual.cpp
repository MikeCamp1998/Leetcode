//https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> map;
        bool res = false;
        
        for (int i = 0; i < s.length(); i++) {
            map[s[i]]++;
        }
        
        int numOccur = map[s[0]];
        
        for (auto i : map) {
            if (i.second == numOccur) {
                res = true;
            } else {
                return false;
            }
        }
        
        return res;
    }
};