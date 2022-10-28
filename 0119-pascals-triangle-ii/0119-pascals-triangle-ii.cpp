class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1);
        result[0] = result[rowIndex] = 1;
        long temp = 1;
        for(int i = 1, up = rowIndex, down = 1; i < rowIndex; ++i, --up, ++down) {
            temp = temp * up / down;
            result[i] = temp;
        }
        return result;
    }
};