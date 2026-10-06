class CustomStack {
public:
    stack<int> st;
    int size;
    CustomStack(int maxSize) {
        this->size = maxSize;
    }
    
    void push(int x) {
        if(st.size() < size){
            st.push(x);
        }
    }
    
    int pop() {
        if(st.empty()){
            return -1;
        }
        int val = st.top();
        st.pop();
        return val;
    }
    
    void increment(int k, int val) {
        vector<int> arr;
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        reverse(arr.begin(),arr.end());
        if(k >= arr.size()){
            for(int &i : arr){
                i += val;
            }
        }
        else{
            for(int i = 0; i < k; i++){
                arr[i] += val;
            }
        }
        for(int i : arr){
            st.push(i);
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */