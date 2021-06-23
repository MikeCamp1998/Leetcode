/*
class Solution {
public:
    int balancedStringSplit(string s) {
        int maxS = 0;
        int count = 0;
        
        for (int i = 0; i < s.length(); i = count) {
            
            int lCount = 0;
            int rCount = 0;
            
            if (s[i] == 'R') {
                rCount++;
            }
            if (s[i] == 'L') {
                lCount++;
            }
            
            count = i + 1;
            
            while (rCount != lCount) {
                if (s[count] == 'R') {
                    rCount++;
                } else {
                    lCount++;
                }
                
                count++;
            }
            
            maxS++;
        }
        
        return maxS;
    }
};
*/

class Solution {
public:
    int balancedStringSplit(string s) {
        int maxS = 0;
        int count = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                count++;
            } else {
                count--;
            }
            
            if (count == 0) {
                maxS++;
            }
        }
        
        return maxS;
    }
};