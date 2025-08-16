class MyQueue {
private:
    stack<int> s, q;

public:
    MyQueue() {}
    
    void push(int x) {
        // Step 1: move everything to s
        while (!q.empty()) {
            s.push(q.top());
            q.pop();
        }
        // Step 2: push new element
        q.push(x);
        // Step 3: move everything back
        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }
    }
    
    int pop() {
        int x = q.top();
        q.pop();
        return x;
    }
    
    int peek() {
        return q.top();
    }
    
    bool empty() {
        return q.empty();
    }
};
