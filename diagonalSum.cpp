//https://leetcode.com/problems/matrix-diagonal-sum/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0;
        
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (j == i || mat.size() - j - 1 == i )
                    res += mat[i][j];
            }
        }
        
        return res;
    }
};