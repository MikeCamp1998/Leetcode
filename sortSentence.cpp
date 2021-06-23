class Solution {
public:
    string sortSentence(string s) {
        
        unordered_map<int, string> map;
        string delim = " ";
        string res = "";

        auto start = 0U;
        auto end = s.find(delim);
        
        while (end != string::npos)
        { 
            map[s[end-1] - '0'] = s.substr(start, end - start);
            
            start = end + delim.length();
            end = s.find(delim, start);
        }
     
        map[s[s.length() -1] - '0'] = s.substr(start, end);
        
        for (auto i : map) {
            cout << i.first << " " << i.second << endl; 
        }
        
        for (int i = 1; i <= 9; i++) {
            if (map.count(i)) {
                map[i].pop_back();
                res.append(map[i]);
                res.append(" ");
            }
        }
        
        res.pop_back();
        return res;
    }
};