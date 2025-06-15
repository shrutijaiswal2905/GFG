class twoStacks {
  public:
  stack<int> st1;
  stack<int> st2;
  vector<int> ans;

    twoStacks() {
        
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        st1.push(x);
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        st2.push(x);
        // code here
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        
        if(st1.empty()){
            return -1;
        }
        else{
            int ans = st1.top();
            st1.pop();
            return ans; 
        }
        
        
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(st2.empty()){
            return -1;
        }
        else{
            int ans = st2.top();
            st2.pop();
            return ans;
        }
    }
};