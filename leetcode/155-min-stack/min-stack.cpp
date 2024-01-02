struct MinStack {
    vector<pair<int, int>> min_stack{};
    
    void push(int val) {
        if (min_stack.empty()) min_stack.emplace_back(val, val);
        else min_stack.emplace_back(val,min(min_stack.back().second, val));
    }
    
    void pop() {
        min_stack.pop_back();
    }
    
    int top() const {
        return min_stack.back().first;
    }
    
    int getMin() const {
        return min_stack.back().second;
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