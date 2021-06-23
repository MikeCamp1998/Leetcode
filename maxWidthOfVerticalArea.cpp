#include <bits/stdc++.h> 
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int res = 0;
        int arr[points.size()];
        int n = sizeof(arr) / sizeof(arr[0]);
        
        for (int i = 0; i < points.size(); i++) {
            arr[i] = points[i][0];
        }
        
        sort(arr, arr + n);
        
        for (int i = 0; i < n-1; i++) {
            if (arr[i+1] - arr[i] > res) {
                res = arr[i+1] - arr[i];
            }
        }
        
        return res;
    }
};

//sort the array of x coordinates, take the largest difference between elements