//https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int, int> map;
        int maxLen = 0;
        int len = 0;
        
        for (int i = 0; i < rectangles.size(); i++) {
            len = min(rectangles[i][0], rectangles[i][1]);
            map[len]++;
            if (len > maxLen)
                maxLen = len;
        }
        
        return map[maxLen];
    }
};