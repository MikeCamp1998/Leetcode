class Solution {
public:
    int minOperations(int n) {
        int res = 0;
        
        if (n % 2 == 1) {
            for (int i = 1; i <= n/2; i++) {
                res+= 2*i;
            }
        }
        else {
            for (int i = 0; i < n/2; i++) {
                res += (2*i) + 1;
            }
        }
  
        return res;
    }
}; 