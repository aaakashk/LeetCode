class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char c : s) {
            if(c >= 'A' && c <= 'Z') str += c + 32;
            else if(c >= 'a' && c <= 'z') str += c;
            else if(c >= '0' && c <= '9') str += c;
        }
        string new_str = str;
        reverse(new_str.begin(), new_str.end());
        return str == new_str;
    }
};