//https://leetcode.com/problems/sort-the-matrix-diagonally/ 
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> mat) {
        unordered_map<int, vector<int>> map;
        int count = 0;
        int mapcount = 0;
        int row = 0;
        int col = 0;
        
        for (int i = mat.size() - 1; i >= 0; i--) {
            row = i;
            col = 0;
            while (row < mat.size() && col < mat[0].size()) {
                map[count].push_back(mat[row][col]);
                row++;
                col++;
            }
            count++;
        }
        
        for (int i = 1; i < mat[0].size(); i++) {
            row = 0;
            col = i;
            while (row < mat.size() && col < mat[0].size()) {
                map[count].push_back(mat[row][col]);
                row++;
                col++;
            }
            count++;
        }
        
        for (int i = 0; i < count; i++) {
            sort(map[i].begin(), map[i].end());
        }
        
        count = 0;
        
        for (int i = mat.size() - 1; i >= 0; i--) {
            row = i;
            col = 0;
            mapcount = 0;
            while (row < mat.size() && col < mat[0].size()) {
                mat[row][col] = map[count][mapcount++];
                row++;
                col++;
            }
            count++;
        }
        
        for (int i = 1; i < mat[0].size(); i++) {
            row = 0;
            col = i;
            mapcount = 0;
            while (row < mat.size() && col < mat[0].size()) {
                mat[row][col] = map[count][mapcount++];
                row++;
                col++;
            }
            count++;
        }
        
        return mat;
    }
};