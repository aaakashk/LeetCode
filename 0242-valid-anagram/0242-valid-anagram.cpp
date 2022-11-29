class Solution {
public:
    bool isAnagram(string s, string t) {
        int arrayt[26], arrays[26];
        memset(arrayt, 0, sizeof(arrayt));
        memset(arrays, 0, sizeof(arrays));
        for(int i = 0; i < s.length(); i++) {
            arrays[s[i] - 'a']++;
        }
        for(int i = 0; i < t.length(); i++) {
            arrayt[t[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(arrayt[i] != arrays[i]) return false;
        }
        return true;
    }
};