class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) return n;
        int array[45];
        array[0] = 1, array[1] = 2;
        for(int i = 2; i < 45; i++) {
            array[i] = array[i - 1] + array[i - 2];
        }
        return array[n - 1];
    }
};