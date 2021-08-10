//https://leetcode.com/problems/queries-on-a-permutation-with-key 

#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> indices;
        vector<int> permutation;
        
        for (int i = 1; i <= m; i++) {
            permutation.push_back(i);
        }
        
        for (int i = 0; i < queries.size(); i++) {
            for (int j = 0; j < permutation.size(); j++) {
                if (permutation[j] == queries[i]) {
                    indices.push_back(j);
                    permutation.erase(permutation.begin() + j);
                    permutation.insert(permutation.begin(), queries[i]);
                }
            }
        }
        
        return indices;
    }
};
