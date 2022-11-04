class Solution {
public:
    
    bool is_vowel(char c) {
        char array[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; 
        for(int i : array) if(c == i) return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;
        while(i < j) {
            
            while(i < j && !is_vowel(s[i])) ++i; 
            
            while(i < j && !is_vowel(s[j])) --j;
            swap(s[i++], s[j--]);
            
        }
        return s;
    }
};