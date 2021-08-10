//https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/
class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> res(rowSum.size(), vector<int> (colSum.size(), 0));
             
        for (int i = 0; i < rowSum.size(); i++) {
            for (int j = 0; j < colSum.size(); j++) {
                int minNum = min(rowSum[i], colSum[j]);
                res[i][j] = minNum;
                rowSum[i] -= minNum;
                colSum[j] -= minNum;
            }
        }
        
        return res;
    }
};

