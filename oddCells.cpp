//https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int> (n, 0));
        int res = 0;
        
        for (int i = 0; i < indices.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[indices[i][0]][j]++;
            }
            
            for (int k = 0; k < matrix.size(); k++) {
                matrix[k][indices[i][1]]++;
            }        
        }
        
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] % 2 == 1)
                    res++;
            }
        }
        
        return res;
    }
};