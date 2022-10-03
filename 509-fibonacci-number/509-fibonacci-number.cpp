class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        int f0 = 0, f1 = 1, fn = 0;
        for(int i = 1; i < n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        return f1;
    }
};