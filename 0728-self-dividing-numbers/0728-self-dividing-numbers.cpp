class Solution {
public:
    
    bool isSelfDividing(int n) {
        int copy_n = n, digit = 0;
        while(copy_n != 0) {
            digit = copy_n % 10;
            if(digit == 0 || n % digit != 0) return false;
            copy_n /= 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for(int i = left; i <= right; ++i) {
            if(isSelfDividing(i)) vec.push_back(i);
        }
        return vec;
    }
};