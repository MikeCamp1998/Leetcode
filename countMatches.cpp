class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res = 0;
        for (int i = 0; i < items.size(); i++) {
            if (ruleKey == "type" && ruleValue == items[i][0]) {
                res++;
            }
            if (ruleKey == "color" && ruleValue == items[i][1]) {
                res++;
            }
            if (ruleKey == "name" && ruleValue == items[i][2]) {
                res++;
            }
        }
        
        return res;
    }
};