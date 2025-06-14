class Solution {
  public:
    int priority(char op) {
        if (op == '^') return 3;
        if (op == '*' || op == '/') return 2;
        if (op == '+' || op == '-') return 1;
        return 0;
    }

    string infixToPostfix(string& s) {
        int i = 0;
        int n = s.size();
        stack<char> st;
        string ans = "";

        while (i < n) {
            if (isalnum(s[i])) { // letters or digits
                ans += s[i];
            } 
            else if (s[i] == '(') {
                st.push(s[i]);
            } 
            else if (s[i] == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop(); // pop the '('
            } 
            else {
                while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};