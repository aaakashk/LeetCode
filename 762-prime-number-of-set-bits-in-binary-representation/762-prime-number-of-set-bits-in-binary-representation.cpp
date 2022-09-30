class Solution {
public:
    
    bool is_prime(int n) {
        if(n <= 1) return false;
        if(n == 2) return true;
        if(!(n & 1)) return false;
        for(int i = 3; i < n; i += 2) {
            if(n % i == 0) return false;
        }
        return true;
    }
    
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        while(left <= right) {
            int no_of_bits = __builtin_popcount(left);
            if(is_prime(no_of_bits)) count++;
            left++;
        }
        return count;
    }
};