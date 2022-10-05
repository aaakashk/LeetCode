class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1) return true;
        map<int, int> map;
        map[3] = 1;
        map[9] = 2;
        map[7] = 3;
        map[1] = 4;
        int last_digit = n % 10;
        if(!map[last_digit]) return false;
        int power = map[last_digit];
        double apparent_number = pow(3, power);
        while(apparent_number <= n) {
            if(apparent_number == n) return true;
            power += 4;
            apparent_number = pow(3, power);
        }
        return false;
    }
};