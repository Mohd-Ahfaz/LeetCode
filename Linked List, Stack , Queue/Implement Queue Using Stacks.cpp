class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(s1.size() != 0){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size() != 0){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int ans;
        ans = s1.top();
        s1.pop();
        return ans;
    }
    
    int peek() {
        int a;
        a = s1.top();
        return a;
    }
    
    bool empty() {
        return s1.empty();
    }
};