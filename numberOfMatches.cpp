class Solution {
public:
    int numberOfMatches(int n) {
        int res = 0;
        while (n > 1){
            if (n % 2 == 0) {
                n = n / 2;
                res += n;
            }
            else {
                n = (n - 1) / 2;
                res += n;
                n++;
            }
        }

        return res;
    }
};

//Could also return n - 1 LOL
