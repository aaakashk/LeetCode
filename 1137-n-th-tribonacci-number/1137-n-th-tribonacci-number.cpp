class Solution {
public:
    int tribonacci(int n) {
        if(n <= 1) return n;
        if(n == 2) return 1;
        int fib[38] = {0, 1, 1};
        for(int i = 3; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3];
        }
        return fib[n];
    }
};