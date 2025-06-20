class Solution {
  public:
    int maxLen(string& s) {
        // code here
        int n = s.length();
        stack<int> stk;
        stk.push(-1);
        int result = 0;
        for(int i = 0; i<n;i++){
            if(s[i] == '('){
                stk.push(i);
            }
            else{
                stk.pop();
                if(!stk.empty()){
                    result = max(result, i - stk.top());
                }
                else{
                    stk.push(i);
                }
            }
        }
        return result;
    }
};