class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> res;
        
        for (int i = 0; i < image.size(); i++) {
            vector<int> tmp;
            for (int j = image[0].size() - 1; j >= 0; j--) {
                if (image[i][j] == 0) {
                    tmp.push_back(1);
                } else {
                    tmp.push_back(0);
                }
            }
            res.push_back(tmp);
            tmp.clear();
        }
        
        return res;
    }
};