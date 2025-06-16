class Solution {
public:
    int celebrity(vector<vector<int>>& M) {
        int n = M.size();              // Get size of matrix
        stack<int> st;

        // Step 1: Push all people into the stack
        for (int i = 0; i < n; i++) {
            st.push(i);
        }

        // Step 2: Find potential celebrity
        while (st.size() > 1) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            if (M[a][b] == 1) {
                // a knows b → a can't be celebrity
                st.push(b);
            } else {
                // a doesn't know b → b can't be celebrity
                st.push(a);
            }
        }

        // Step 3: Validate the potential celebrity
        if (st.empty()) return -1;

        int candidate = st.top();

        // Candidate should not know anyone (except themselves — skip i == candidate)
        for (int i = 0; i < n; i++) {
            if (i != candidate && M[candidate][i] == 1)
                return -1;
        }

        // Everyone should know candidate (except themselves — skip i == candidate)
        for (int i = 0; i < n; i++) {
            if (i != candidate && M[i][candidate] == 0)
                return -1;
        }

        return candidate;
    }
};