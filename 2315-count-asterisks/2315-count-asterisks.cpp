class Solution {
public:
    int countAsterisks(string s) {
        int sign = 1, asterisks = 0;
        for(char& c: s) {
            if((sign ^= c == '|') && c == '*') ++asterisks;
        }
        return asterisks;
    }
};