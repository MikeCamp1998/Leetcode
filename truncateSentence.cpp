class Solution {
public:
    string truncateSentence(string s, int k) {
        string delim = " ";
        string res = "";
        int count = 1;
        auto start = 0;
        auto end = s.find(delim);
        
        while (end != string::npos) {
            if (k <= count)
                break;
            
            start = end + delim.length();
            end = s.find(delim, start);
            count++;
        }
        
        res += s.substr(0, end);
        
        return res;
    }
};

/*
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && --k == 0) {
                return s.substr(0, i);
            }
        }
        return s;
*/