class Solution {
  public:
    int maxProfit(vector<int> &arr) {
        int n = arr.size();
        int maximum = 0;
        int ans = 0;
        for(int i = n-1; i >= 0 ; i--){
            if(arr[i] > maximum){
                maximum = arr[i];
            }
            else{
                ans = max(ans,maximum - arr[i]);
            }
        }
        return ans;
    }
};