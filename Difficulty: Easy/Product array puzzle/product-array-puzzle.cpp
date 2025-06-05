// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, 1);

    // Step 1: Prefix product from left to right
    int left = 1;
    for (int i = 0; i < n; i++) {
        res[i] = left;
        left *= arr[i];
    }

    // Step 2: Suffix product from right to left
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= right;
        right *= arr[i];
    }

    return res;
    }
};
