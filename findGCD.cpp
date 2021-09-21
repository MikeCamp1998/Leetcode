//https://leetcode.com/problems/find-greatest-common-divisor-of-array/ 
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int res = 0;
        
        sort(nums.begin(), nums.end());
        
        int mod = 1;
        int smallest = nums[0];
        
        while (mod != 0) {
            mod = nums[nums.size() - 1] % nums[0];
            mod += smallest % nums[0];
            if (mod == 0) {
                res = nums[0];
                break;
            } else {
                nums[0]--;
            }
        }
        
        return res;
    }
};