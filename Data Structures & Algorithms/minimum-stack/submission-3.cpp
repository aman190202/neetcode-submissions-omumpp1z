class MinStack {
    std::stack<int> mystack;
    std::stack<int> min_stack;
    int min = INT_MAX;
public:
    MinStack() { }
    
    void push(int val) 
    {
        mystack.push(val);
        if(val <= min)
        { 
            min_stack.push(val);
            min = val;
        }
    }
    
    void pop() 
    {
        if(min == mystack.top())
        {
            min_stack.pop();
            if(min_stack.empty())
                min = INT_MAX;
            else
                min = min_stack.top();
        }
        mystack.pop();
    }
    
    int top() {
        return mystack.top();
    }
    
    int getMin() {
        return min;
    }
};
