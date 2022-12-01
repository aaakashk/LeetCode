class Solution {
public:
    
    bool isVowel(char c) {
        return (0x208222 >> (c & 0x1f)) & 1;
    }
    
    bool halvesAreAlike(string s) {
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0, j = s.size() - 1; i < j; ++i, --j) {
            if(isVowel(s[i])) ++cnt1;
            if(isVowel(s[j])) ++cnt2;   
        }
        return cnt1 == cnt2;
    }
};