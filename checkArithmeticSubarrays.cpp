class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        vector<int> tmp;
        
        for (int i = 0; i < l.size(); i++) {
            bool arithmetic = false;
            tmp.clear();
            
            for (int j = l[i]; j <= r[i]; j++) {
                tmp.push_back(nums[j]);
            }
            sort(tmp.begin(), tmp.end());
            for (int k = 0; k < tmp.size() - 1; k++) {
                if (tmp[k+1] - tmp[k] == tmp[1] - tmp[0]){
                    arithmetic = true;
                } else {
                    arithmetic = false;
                    break;
                }
            }
            res.push_back(arithmetic);
        }
        
        return res;
    }
};
