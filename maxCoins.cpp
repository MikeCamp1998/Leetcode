//https://leetcode.com/problems/maximum-number-of-coins-you-can-get/ 
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int res = 0;
        sort(piles.begin(), piles.end());

        int start = (piles.size() / 3);
        for (int i = start; i < piles.size(); i += 2) {
            res += piles[i];
        }
    
        return res;
    }
};