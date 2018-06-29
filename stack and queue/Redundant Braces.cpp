int Solution::braces(string A) {
    stack<char> st;
    int n=A.size();
 

    for (int i=0;i<n;i++) {
 
        
        if (ch == ')') {
            char top = st.top();
            st.pop();
 
            
            bool flag = true;
 
            while (top != '(') {
 
                
                if (top == '+' || top == '-' || 
                    top == '*' || top == '/')
                    flag = false;
 
                
                top = st.top();
                st.pop();
            }
 
            
            if (flag == true)
                return 1;
        }
 
        else
            st.push(ch); 
                  
    }
    return 0;
}





