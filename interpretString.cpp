class Solution {
public:
    string interpret(string command) {
        string oDelim = "()";
        string alDelim = "(al)";
        string res = "";
        
        vector<int> oCount;
        vector<int> alCount;
        
        size_t pos = 0;
        size_t newpos = 0;
        
        while ((pos = command.find(oDelim, newpos)) != string::npos) {
            oCount.push_back(pos);
            newpos = pos + oDelim.length();
        }
        
        newpos = 0;
        
        while ((pos = command.find(alDelim, newpos)) != string::npos) {
            alCount.push_back(pos);
            newpos = pos + alDelim.length();
        }
       
        for (int i = 0; i < command.length(); i++) {
            if (find(oCount.begin(), oCount.end(), i) != oCount.end()) {
                res += "o";
            }
            if (find(alCount.begin(), alCount.end(), i) != alCount.end()) {
                res += "al";
            } 
            if (command[i] == 'G') {
                res += "G";
            }
        }
        
        return res;
    }
};