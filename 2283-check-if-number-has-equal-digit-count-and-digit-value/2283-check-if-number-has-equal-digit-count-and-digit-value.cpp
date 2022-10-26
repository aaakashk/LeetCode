class Solution {
public:
    bool digitCount(string num) {
        int array[10];
        memset(array, 0, sizeof(array));
        for(int i = 0; i < num.length(); ++i) {
            array[num[i] - 48]++;
        }
        for(int i = 0; i < num.length(); ++i) {
            if(num[i] - 48 != array[i]) return false;
        }
        return true;
    }
};