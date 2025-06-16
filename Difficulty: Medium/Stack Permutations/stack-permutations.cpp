class Solution {
  public:
    bool checkPerm(vector<int>& a, vector<int>& b) {
        // code here
        stack<int> st;
        int j=0;
        int N = a.size();
        for(int i=0;i<N;i++){
            st.push(a[i]);
            while(st.size()> 0 && st.top()==b[j]){
                st.pop();
                j++;
            }
        }
        if(j==N && st.size()==0)
            return true;
        else{
            return false;
        }
    }
};