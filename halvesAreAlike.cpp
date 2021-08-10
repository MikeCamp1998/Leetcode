//https://leetcode.com/problems/determine-if-string-halves-are-alike/
class Solution {
public:
    bool halvesAreAlike(string s) {
        string vowels = "aeiouAEIOU";
        int count1 = 0;
        int count2 = 0;
        
        for (int i = 0; i < s.length() / 2; i++) {
            if (vowels.find(s[i]) != string::npos) 
                count1++;
            
            if (vowels.find(s[s.length()- 1 - i]) != string::npos) 
                count2++;
        }
        
        return count1 == count2;
    }
};
