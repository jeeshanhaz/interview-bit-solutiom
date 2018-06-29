int Solution::singleNumber(const vector<int> &A) {
    int i=0;
    int n=A.size();
    int res;
    while(i<n){
        res=res^A[i];
        i++;
    }
    return res;
}



