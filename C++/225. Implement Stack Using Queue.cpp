/// Using two queues

class MyStack {
public:
    
    queue<int>prim;
    queue<int>secn;
    
    MyStack() {
        
    }
    
    void push(int x) {
        prim.push(x);
    }
    
    int pop() {
        
        int popped;
        
        while(prim.size()>1)
        {
            secn.push(prim.front());
            prim.pop();
        }

        popped=prim.front();
        prim.pop();
        
        while(!secn.empty())
        {
            prim.push(secn.front());
            secn.pop();
        }
        
        return popped;
    }
    
    int top() {
        cout<<prim.back()<<endl;
        return prim.back();
    }
    
    bool empty() {
        
        if(prim.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

