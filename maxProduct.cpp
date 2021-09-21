class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxNum = 0;
        int maxNum2 = 0;
        int res = 0;
        
        //sort(nums.begin(), nums.end());
        //res = (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= maxNum) {
                maxNum2 = maxNum;
                maxNum = nums[i]; 
            }
            else if (nums[i] >= maxNum2) {
                maxNum2 = nums[i];
            }
        }
        
        res = (maxNum - 1) * (maxNum2 - 1);
            
        return res;
    }
};