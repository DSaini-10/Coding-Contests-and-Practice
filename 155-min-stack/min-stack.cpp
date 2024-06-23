#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    vector<pair <int,int>> vp;
    MinStack() {
    }
    
    void push(int val) {
        if(vp.size()==0){
            vp.emplace_back(make_pair(val,val));
        }
        else{
            if((*(--vp.end())).second > val){
                vp.emplace_back(make_pair(val,val));
            }
            else{
                vp.emplace_back(make_pair(val,(*(--vp.end())).second));
            }
        }
    }
    
    void pop() {
        vp.erase(vp.end());
    }
    
    int top() {
        return (*(--vp.end())).first;
    }
    
    int getMin() {
        return (*(--vp.end())).second;
        
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