class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>ans(arr.size(),-1);
        stack<int>s;
        
        for(int i = 2*n-1;i>=0;i--){
            int index = i%n;
            while(!s.empty() && s.top()<=arr[index]){
                s.pop();
            }
            
            if(i<n){
                if (!s.empty()) ans[index] = s.top();
            }
            
            s.push(arr[index]);
        }
        
        return ans;
    }
};