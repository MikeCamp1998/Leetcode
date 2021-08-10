/*
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i; j < arr.size(); j+= 2) {
                for (int k = i; k <= j; k++) {
                    res += arr[k];
                }
            }
        }
        return res;
    }
};
*/
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            int start = n - i;          //This represents how many times a subarray can start at index i
            int end = i + 1;            //This represents how many times a subarray can end at index i
            
            int total = start * end;    //This represents the total number of subarray possible at index i
            int odd = (total + 1) / 2;  //This give you the total number of odd subarrays at index i
                                        //You add 1 to account for odd totals
            res += odd * arr[i];        //This gets you the sum of all odd subarrays
        }

        return res;
    }
};