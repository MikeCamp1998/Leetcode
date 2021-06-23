class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res(nums.size());
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] < nums[i]) {
                    res[i]++;
                }
            }
        }
        
        return res;
    }
};


/*Better o(n) solution
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int i, j;
        int count[101] = {0, 0, 0};
        for(i = 0; i < nums.size(); i++) {   //captures the number of elements at each number from 0 - 100
            count[nums[i]]++;
        }
        for(i = 1; i < 101; i++) {        //this is a counter that lets you know how many values are <= the current index/number
            count[i] += count[i - 1];
        }
        for(i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                answer.push_back(0);
            else
                answer.push_back(count[nums[i] - 1]);
                
        }
        return answer;
    }
*/