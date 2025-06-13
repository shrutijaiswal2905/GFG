class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // If k is greater than the queue size, return original queue
        if (k > q.size()) return q;

        stack<int> st;

        // Step 1: Push first k elements into the stack
        for (int i = 0; i < k; ++i) {
            st.push(q.front());
            q.pop();
        }

        // Step 2: Enqueue the reversed elements back into queue
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        // Step 3: Move the remaining elements (size - k) to the back
        int remaining = q.size() - k;
        for (int i = 0; i < remaining; ++i) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};