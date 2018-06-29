int Solution::solve(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++){
        while(i+1<n && A[i]==A[i+1]){
            i++;
        }
        if(A[i]==n-1-i)
            return 1;
    }
    return -1;
}


