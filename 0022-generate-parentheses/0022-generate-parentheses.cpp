class Solution {
public:
    vector<string> answer;
    
    void backtrack(string s, int open, int close, int n) {
        if(s.length() == n * 2) {
            answer.push_back(s);
            return;
        }
        if(open < n) backtrack(s + "(", open + 1, close, n);
        if(close < open) backtrack(s + ")", open, close + 1, n);
    }
    
    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n);
        return answer;
    }
};