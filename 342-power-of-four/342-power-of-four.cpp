class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        if((n & n - 1) == 0 && __builtin_ctz(n) % 2 == 0) {
            return true;
        }
        return false;
    }
};