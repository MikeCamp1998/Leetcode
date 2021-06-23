class Solution {
public:
    bool checkIfPangram(string sentence) {
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        unordered_map <char,int> map;
                
        for (int i = 0; i < sentence.length(); i++) {
            map[sentence[i]]++;
        }
                
        for (int i = 0; i < alphabet.length(); i++) {
            if (map[alphabet[i]] < 1) {
                return false;
            }
        }
        return true;
    }
};