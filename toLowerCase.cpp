class Solution {
public:
    string toLowerCase(string s) {
        string lower = "abcdefghijklmnopqrstuvwxyz";
        string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < lower.length(); j++) {
                if (s[i] == upper[j]) {
                    s[i] = lower[j];
                }
            }
        }
        
        return s;
    }
};