//https://leetcode.com/problems/sort-array-by-parity/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res, evens, odds;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 1) {
                odds.push_back(nums[i]);
            }
            else {
                evens.push_back(nums[i]);
            }
        }
        
        res.insert( res.end(), evens.begin(), evens.end() );
        res.insert( res.end(), odds.begin(), odds.end() );
        
        return res;
    }
};