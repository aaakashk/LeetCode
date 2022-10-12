class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i = 0; i < s.length(); i++) {
            if(!stack.empty() && (stack.top() == s[i] - 1 || stack.top() == s[i] - 2))
                stack.pop();
            else stack.push(s[i]);
        }
        return stack.empty();
    }
};