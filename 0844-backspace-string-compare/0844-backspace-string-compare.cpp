class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = 0;
        for(char c : s) {
            if(c != '#') s[i++] = c;
            else if(i > 0)i--;
        }
        string new_s = s.substr(0, i);
        i = 0;
        for(char c : t) {
            if(c != '#') t[i++] = c;
            else if(i > 0) i--;
        }
        string new_t = t.substr(0, i);
        return new_s == new_t;
    }
};