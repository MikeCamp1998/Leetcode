class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int count = 0;
        bool valid = false;
        for (int i = 0; i < s.length(); i++) {
            if ( s[i] == '(' ) {
                count++;
                valid = true;
            }
            if ( s[i] == ')' && valid == true) {
                count--;
            }
            
            res = max(res, count);
        }
        return res;
    }
};