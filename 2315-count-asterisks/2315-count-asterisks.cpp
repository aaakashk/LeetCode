class Solution {
public:
    int countAsterisks(string s) {
        int countBars = 0, asterisks = 0;
        for(int i = 0; i < s.length(); ++i) {
            if(s[i] == '|') ++countBars;
            if(countBars % 2 == 0) {
                if(s[i] == '*') ++asterisks;
            }
        }
        return asterisks;
    }
};