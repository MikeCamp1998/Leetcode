class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        for (int i = 0; i < boxes.length(); i++) {
            int numOp = 0;
            for (int j = 0; j < boxes.length(); j++) {
                if (boxes[j] == '1') {
                    int distance = abs(i - j);
                    numOp += distance;
                }
            }
            answer.push_back(numOp);
        }
        return answer;
    }
};