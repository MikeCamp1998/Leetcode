class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        int subsetSize = pow(2, nums.size());
        int xorTotal = 0;
        
        for (int i = 0; i < subsetSize; i++) {
            
            int xorSubset = 0;
            
            for (int j = 0; j < nums.size(); j++) {
                if (i & (1 << j)) {
                    xorSubset = xorSubset ^ nums[j];
                }
            }
            
            xorTotal += xorSubset;
        }

        return xorTotal;
    }
};
