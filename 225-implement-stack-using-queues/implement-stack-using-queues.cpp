class MyStack {
public:
    MyStack() {
        
    }
    queue <int> q;
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int n= q.size();
        if(n>1){
            for(int i=0;i<n-1;i++){
                q.push(q.front());
                q.pop();
            }
        }
        
        int val=q.front();
        q.pop();
        return val;
    }
    
    int top() {
        int temp =this->pop();
        q.push(temp);
        int n= q.size();
        if(n>1){
            for(int i=0;i<n;i++){
                q.push(q.front());
                q.pop();
            }
        }
        return temp;
    }
    
    bool empty() {
        if(q.size()==0){return true;}
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