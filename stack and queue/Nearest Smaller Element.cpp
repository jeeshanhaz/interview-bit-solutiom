vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> v;
    int n=A.size();
    stack<int> s;
    s.push(-1);
    stack<int> s2;
    s.push(A[0]);
    
    int i=0;
    while(i<n){
        while(A[i]<=s.top() && !s.empty()){
            s.pop();
        }
        if(!s.empty() )       
            v.push_back(s.top());
        
        
        s.push(A[i]);
        i++;    
        }
    return v;
    }






