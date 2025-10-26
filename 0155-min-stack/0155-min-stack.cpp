class MinStack {
public:
    stack<int> dataStack;
    stack<int> mini; 
    MinStack() {
        //
    }
    
    void push(int val) {
        dataStack.push(val);
        if(mini.empty() || val<=mini.top())
        {
            mini.push(val);
        }
    }
    
    void pop() {
        if(dataStack.empty()){
            return;
        }
        if(dataStack.top()== mini.top()){
            mini.pop();
        }
        dataStack.pop();
    }
    
    int top() {
        if(dataStack.empty()){return -1;}
       return  dataStack.top();
    }
    
    int getMin() {
        if (mini.empty()) {
            return -1;
        }
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */