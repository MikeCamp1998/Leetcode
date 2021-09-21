//https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map <char, int> map1;
        unordered_map <char, int> map2;
        int res = 0;
        
        for (int i = 0; i < s.length(); i++) {
            map1[s[i]]++;
            map2[t[i]]++;
        }
        
        for (auto i : map1) {
            if (i.second >= map2[i.first]) {
                res += i.second - map2[i.first];
            }
        }
        
        return res;
    }
};