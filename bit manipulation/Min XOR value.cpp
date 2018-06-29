int Solution::findMinXor(vector<int> &A) {
    int i=1;
    int n=A.size();
    sort(A.begin(),A.end());
    int minm=A[0]^A[1];
    while(i<n-1){
        minm=min(A[i]^A[i+1],minm);
        i++;
    }
    return minm;
}


