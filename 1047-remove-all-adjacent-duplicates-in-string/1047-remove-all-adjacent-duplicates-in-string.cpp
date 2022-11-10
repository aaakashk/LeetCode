class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        for(auto& i : s) {
            if(i == result.back()) result.pop_back(); 
            else result += i;
        }
        return result;
    }
};