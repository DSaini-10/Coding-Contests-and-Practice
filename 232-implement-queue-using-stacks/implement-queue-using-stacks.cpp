class MyQueue {
public:
    stack <int> st1;
    stack <int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st2.size()!=0){
            int n=st2.size();
            for(int i=0;i<n;i++){
                st1.push(st2.top());
                st2.pop();
            }
        }
        st1.push(x);

    }
    
    int pop() {
        if(st1.size()!=0 ){
            int n =st1.size();
            for(int i=0;i<n;i++){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int val=st2.top();
        st2.pop();
        return val;
    }
    
    int peek() {
        if(st1.size()!=0){
            int n =st1.size();
            for(int i=0;i<n;i++){
                st2.push(st1.top());
                // cout<<st2.top();
                st1.pop();
            }
        }
        
        int val=st2.top();
        return val;

    }
    
    bool empty() {
        if(st1.size()!=0){
            int n =st1.size();
            for(int i=0;i<n;i++){
                st2.push(st1.top());
                // cout<<st2.top();
                st1.pop();
            }
        }
        if(st2.size()==0){return true;}
        return false;
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