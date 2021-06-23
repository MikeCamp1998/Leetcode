class Solution {
public:
    int minPartitions(string N) {
        int minNum = 0;
        
        for (int n = 0; n < N.length(); n++) {
            int convertedNum = N[n] - '0'; //This N[n] - '0' will allow you to convert char to int correctly
            minNum = max(minNum, convertedNum);      
        }
        
        return minNum;
    }
};