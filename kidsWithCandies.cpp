class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        
        vector<bool> chosenOnes(candies.size(), false);
        int maxCandy = 0;
        
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxCandy) {
                maxCandy = candies[i];
            }
        }
        
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandy) {
                chosenOnes[i] = true;
            }
        }
        
        return chosenOnes;
    }
};