stack<int> minstack;
void push(stack<int>& s, int a) {
    // Your code goes here
    s.push(a);
    if(minstack.empty()|| a<=minstack.top()){
        minstack.push(a);
    }
}

bool isFull(stack<int>& s, int n) {
    // Your code goes here
    return s.size()==n;
}

bool isEmpty(stack<int>& s) {
    // Your code goes here
    return s.empty();
}

int pop(stack<int>& s) {
    // Your code goes here
    if(s.empty()) return -1;
    int topelement = s.top();
    s.pop();
    if(!minstack.empty() && topelement== minstack.top()){
        minstack.pop();
    }
    return topelement;
}

int getMin(stack<int>& s) {
    // Your code goes here
    if(minstack.empty()) return -1;
    return minstack.top();
}