class Solution {
public:
    int sumBase(int n, int k) {
        int res = 0;
        
        while (n >= 0) {
            int remainder = n % k;
            n = n / k;
            res += remainder;
            
            if (n < k) {
                res += n;
                break;
            }
        }
        
        return res;
    }
};