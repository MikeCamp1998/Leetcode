class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0;
        int count = 0;
        
        for (int i = 0; i < gain.size(); i++) {
            count += gain[i];
            if (count > res) {
                res = count;
            }
        }
        
        return res;
    }
};