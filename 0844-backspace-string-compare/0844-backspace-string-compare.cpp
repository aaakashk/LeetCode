class Solution {
public:
    
    string removingHash(string s) {
        int i = 0;
        for(char c : s) {
            if(c != '#') s[i++] = c;
            else i = max(0, --i);
        }
        return s.substr(0, i);
    }
    
    bool backspaceCompare(string s, string t) {
        return removingHash(s) == removingHash(t);
    }
};