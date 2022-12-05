class MyQueue {
public:
    
    stack<int> prim;
    stack<int> secn;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        prim.push(x);    
    }
    
    int pop() {
        
        int popped;
        
        while(!prim.empty())
        {
            secn.push(prim.top());
            prim.pop();
        }
        
        if(!secn.empty())
        {
            popped=secn.top();
            secn.pop();
        }
        
        while(!secn.empty())
        {
            prim.push(secn.top());
            secn.pop();
        }
        
        return popped;
    }
    
    int peek() {
        
        int peeked;
        
        while(!prim.empty())
        {
            secn.push(prim.top());
            prim.pop();
        }
        
        if(!secn.empty())
            peeked=secn.top();
        
        while(!secn.empty())
        {
            prim.push(secn.top());
            secn.pop();
        }
        
        return peeked;
    }
    
    bool empty() {
        if(prim.empty())
            return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */