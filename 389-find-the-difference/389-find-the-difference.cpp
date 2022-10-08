class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // for(int i = 0; i < s.length(); ++i) {
        //     if(s[i] != t[i]) return t[i];
        // }
        // return t[t.length() - 1];
        
        // addition of ASCII values of characters and then subtracting
        // int result = 0;
        // for(char c: t) result += c;
        // for(char c: s) result -= c;
        // return (char)result;
        
        // using XOR
        int result = 0;
        for(char c: t) result ^= c;
        for(char c: s) result ^= c;
        return result;
    }
};