class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int> s;
        int n= arr.size();
        vector<int> ans(n);
        
        
        for(int i= n-1; i>=0;i--){
            while(!s.empty() && s.top()<= arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = s.top();
            }
            s.push(arr[i]);
        }
        return ans;
    }
};