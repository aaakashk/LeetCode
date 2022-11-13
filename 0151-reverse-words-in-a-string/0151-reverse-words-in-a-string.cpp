class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        string new_s = "";
        while(i < s.length()) {
            if(s[i] == ' ') i++;
            else {
                string word = "";
                while(s[i] != ' ') {
                    word += s[i];
                    i++;
                    if(i == s.length()) break;
                }
                reverse(word.begin(), word.end());
                new_s += word + " ";
            }
        }
        new_s = new_s.substr(0, new_s.length() - 1);
        reverse(new_s.begin(), new_s.end());
        return new_s;
    }
};