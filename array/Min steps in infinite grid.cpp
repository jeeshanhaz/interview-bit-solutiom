//Min Steps in Infinite Grid
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size();
    if(n<=1){
        return 0; 
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        count=count + max(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]));
    }
    return count;
}

