class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> map;
        
        for (int i = 0; i < moves.length(); i++) {
            map[moves[i]]++;
        }
        
        if (map['U'] == map['D'] && map['L'] ==  map['R']) {
            return true;
        }
        
        return false;
    }
};