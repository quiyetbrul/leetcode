class MinStack {
public:
    std::vector<int> s1;
    std::vector<int> s2;

    MinStack() {}

    void push(int val) {
        if (s2.empty() || val <= s2.back()) {
            s2.push_back(val);
        }
        s1.push_back(val);
    }

    void pop() {
        if (getMin() == s1.back())
            s2.pop_back();
        s1.pop_back();
    }

    int top() { return s1.back(); }

    int getMin() { return s2.back(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */