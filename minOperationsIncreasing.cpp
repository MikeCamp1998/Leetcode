//https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] >= nums[i+1]) {
                res += nums[i] - nums[i+1] + 1;
                nums[i+1] = nums[i] + 1;
            } 
            else if (nums[i] < (i + 1)) {
                res += i + 1 - nums[i];
                nums[i] = i + 1;
            }
        }
        
        return res;
    }
};