class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        for (int i = 0; i < queries.size(); i++) {
            int numInside = 0;
            for (int j = 0; j < points.size(); j++) {
                double d0 = pow(points[j][0] - queries[i][0], 2);
                double d1 = pow(points[j][1] - queries[i][1], 2);
                double d = pow(d0 + d1, 0.5);
                
                if (d <= queries[i][2]) {
                    numInside++;
                }
            }
            answer.push_back(numInside);
        }
        
        return answer;
    }
};

//compare distance of point to center & distance of point to radius
// d = ((x[1] - x[0])^2 + (y[1] - y[0])^2)^0.5