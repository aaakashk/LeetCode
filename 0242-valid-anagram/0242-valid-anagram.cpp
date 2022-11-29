class Solution {
public:
    bool isAnagram(string s, string t) {
        // int arrayt[26], arrays[26];
        // memset(arrayt, 0, sizeof(arrayt));
        // memset(arrays, 0, sizeof(arrays));
        // for(int i = 0; i < s.length(); i++) {
        //     arrays[s[i] - 'a']++;
        // }
        // for(int i = 0; i < t.length(); i++) {
        //     arrayt[t[i] - 'a']++;
        // }
        // for(int i = 0; i < 26; i++) {
        //     if(arrayt[i] != arrays[i]) return false;
        // }
        // return true;
        
        // better way for almost same logic
        map<char, int> maps, mapt;
        for(char c : s) maps[c]++;
        for(char c : t) mapt[c]++;
        if(maps.size() != mapt.size()) return false;
        for(auto& i : maps) {
            if(mapt[i.first] != maps[i.first]) return false;
        }
        return true;
    }
};