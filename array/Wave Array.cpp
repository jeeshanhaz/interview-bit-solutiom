vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int i=0;
    int n=A.size();
    if(n%2==0){
    while(i<n){
        int temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
        i=i+2;
    }}
    else{
        while(i<n-1){
            int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            i=i+2;
        }
    }
    return A;
}


