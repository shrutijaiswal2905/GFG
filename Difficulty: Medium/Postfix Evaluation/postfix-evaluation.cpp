#include <vector>
#include <stack>
#include <string>
#include <cmath>    // for pow
using namespace std;

class Solution {
public:
    int evaluate(vector<string>& s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i][0]) || (s[i][0] == '-' && s[i].size() > 1)) {
                st.push(stoi(s[i]));
            } else {
                int op2 = st.top(); st.pop();
                int op1 = st.top(); st.pop();
                switch (s[i][0]) {  // access the first character
                    case '+': st.push(op1 + op2); break;
                    case '-': st.push(op1 - op2); break;
                    case '*': st.push(op1 * op2); break;
                    case '/': st.push(op1 / op2); break;
                    case '^': st.push(pow(op1, op2)); break;
                }
            }
        }
        return st.top();
    }
};