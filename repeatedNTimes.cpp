//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        int res = 0;
        unordered_set<int> set;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (set.count(nums[i])) {
                return nums[i];
            }
            set.insert(nums[i]);
        }
        
        return 0;
    }
};