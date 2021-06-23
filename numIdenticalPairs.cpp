class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int goodPairs = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    goodPairs ++;
                }
            }
        }
        
        return goodPairs;
    }
};

/*
public:
    int numIdenticalPairs(vector<int>& A) {
        int res = 0;
        unordered_map<int, int> count;
        for (int a: A) {
            res += count[a]++;
        }
        return res;
    }
*/