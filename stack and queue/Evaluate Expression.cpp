int Solution::evalRPN(vector<string> &A) {
    
    stack<int> st;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] != "+" || A[i] != "-" || A[i] != "*" || A[i] != "/"){
            st.push(stoi(A[i]));}
        else{
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            if(A[i] == "+"){
                st.push(second+first);
            }
            else if(A[i] == "-"){
                st.push(second-first);
            }
            else if(A[i] == "*"){
                st.push(second*first);
            }
            else{
                st.push(second/first);
            }
        }
        
    }
    
    return st.top();
}



