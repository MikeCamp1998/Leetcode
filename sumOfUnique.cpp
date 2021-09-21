//https://leetcode.com/problems/sum-of-unique-elements/
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> map;
        int res = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
            
            if (map[nums[i]] == 1) {
                res += nums[i];
            }
            else if (map[nums[i]] == 2) {
                res -= nums[i];
            }
        }
        
        return res;
    }
};