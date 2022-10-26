class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num & 1) return false;
        int sum = 0, n = num / 2;
        for(int i = 1; i <= n; ++i)
            if(num % i == 0) sum += i;
        return sum == num;
    }
};