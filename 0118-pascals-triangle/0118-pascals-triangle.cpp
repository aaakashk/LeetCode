class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > result;
        for(int i = 0; i < numRows; ++i) {
            vector<int> subarray(i + 1, 1);
            if(i == 0 || i == 1) {
                result.push_back(subarray);
                continue;
            }
            for(int j = 1; j < i; ++j) {
                subarray[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(subarray);
        }
        return result;
    }
};