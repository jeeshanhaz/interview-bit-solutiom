int Solution::solve(string A) {
    int i=0;
    int x=0;
    int n=A.length();
    while(i+x<n){
        if(A[i]!=A[n-1-i-x]){
            x++;
            i=0;
        }
        else {
            i++;
        }
    }
    
    return x;
    
}



