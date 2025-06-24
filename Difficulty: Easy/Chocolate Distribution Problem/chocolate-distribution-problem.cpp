class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n = a.size();
        if(m == 0 || n == 0){
            return 0;
        }
        sort(a.begin(), a.end());
        int min_diff = INT_MAX;
        for(int i = 0; i <= n - m; i++){
            int diff = a[i + m -1] - a[i];
            min_diff = min(min_diff, diff);
        }
        return min_diff;
    }
};