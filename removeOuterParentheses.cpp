class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string res = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' && count == 0) {
                count++;
            } 
            else if (s[i] == ')' && count == 1) {
                count--;
            }
            else if (s[i] == '(') {
                count++;
                res += s[i];
            }
            else if (s[i] == ')') {
                count--;
                res += s[i];
            }
            
        }

        return res;
    }
};