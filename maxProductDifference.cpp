//https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int highest = 0, high = 0, lowest = 10000, low = 10000;
        int highestIdx, lowestIdx;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > highest) {
                highest = nums[i];
                highestIdx = i;
            }
            if (nums[i] < lowest) {
                lowest = nums[i];
                lowestIdx = i;
            }
        }
        
        nums.erase(nums.begin() + highestIdx);
        
        if (highestIdx >= lowestIdx)
            nums.erase(nums.begin() + lowestIdx);
        else
            nums.erase(nums.begin() + lowestIdx - 1);
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > high)
                high = nums[i];
            if (nums[i] < low)
                low = nums[i];
        }
        
        return (highest * high) - (lowest * low);
    }
};