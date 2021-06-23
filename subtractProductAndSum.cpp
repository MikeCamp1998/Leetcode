class Solution {
public:
    int subtractProductAndSum(int n) {
        string str = to_string(n);
        int product = 1;
        int sum = 0;
        for (int i = 0; i < str.length(); i++) {
            product = product * (int(str[i]) - '0');
            sum = sum + (int(str[i]) - '0');
        }
        
        int res = product - sum;
    
        return res;
    }
};