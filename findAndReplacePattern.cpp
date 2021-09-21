//https://leetcode.com/problems/find-and-replace-pattern/
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        unordered_map<char, char> map;
        unordered_set<char> s;
        bool good = false;
        
        for (int i = 0; i < words.size(); i++) {
            map.clear();
            s.clear();
            good = true;
            
            for (int j = 0; j < pattern.length(); j++) {
                if (map.count(pattern[j])) {
                    if (words[i][j] != map[pattern[j]]) {
                        good = false;
                    }
                } 
                else {
                    if (s.count(words[i][j])) {
                        good = false;
                    } else {
                        map[pattern[j]] = words[i][j];
                        s.insert(words[i][j]);
                    }
                }
            }
            
            if (good == true) {
                res.push_back(words[i]);
            }
        }
        
        return res;
    }
};
