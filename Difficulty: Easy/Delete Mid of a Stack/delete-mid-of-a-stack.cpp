class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        int n= s.size();
        int mid=n/2;
        
        stack<int> temp;
        
        for(int i=0; i< n;i++){
            int val=s.top();
            s.pop();
            if(i != mid){
                temp.push(val);
            }
        }
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
};