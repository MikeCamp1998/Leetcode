class Solution {
public:
    string sortString(string s) {
        string res = "";
        unordered_map<char, int> map;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        
        for (int i = 0; i < s.length(); i++) {
            map[s[i]]++;
        }
        
        while (res.length() < s.length()) {
            for (int i = 0; i < alphabet.length(); i++) {
                if (map[alphabet[i]] > 0) {
                    res += alphabet[i];
                    map[alphabet[i]]--;
                }
            }
            for (int i = alphabet.length() - 1; i >= 0; i--) {
                if (map[alphabet[i]] > 0) {
                    res += alphabet[i];
                    map[alphabet[i]]--;
                }
            }
        }
        
        return res;
    }
};