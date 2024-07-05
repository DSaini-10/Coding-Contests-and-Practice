class MinStack {
public:
    vector<long> arr;
    long mini = INT_MAX;
    MinStack() {}

    void push(int val) {
        if (arr.size() == 0) {
            arr.emplace_back(val);
            this->mini = val;
        }
        else if (val >= (this->getMin())) {
            arr.emplace_back(val);
        } 
        else {
            long modi = (long)2 * val - (this->getMin());
            this->mini = val;
            // cout<<modi;
            arr.emplace_back(modi);
        }
        
        // for(auto t:arr){cout<<t<<" ";}
        // cout<<endl;
    }

    void pop() {
        auto it = arr.end();
        long x = *(--it);


        if (x < (this->getMin())) {
            mini = 2 * mini - (*it);
            // cout<<mini;
            arr.erase(it);
        } else {
            arr.erase(it);
        }

        if(arr.size()==0){
            this->mini =INT_MAX;
        }
    }

    int top() {
        auto it = arr.end();
        it--;
        if ((*it) > this->getMin()) {
            return *it;
        }
        return this->getMin();
    }

    int getMin() { return mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */