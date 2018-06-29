int Solution::diffPossible(vector<int> &A, int B) {
    int i=0;
    int n=A.size();
    while(i<n){
        int j=i+1;
        while(j<n){
            if(A[j]-A[i]==B){
                return 1;
            }
            else if(A[j]-A[i]>B){
                break;
            }
            else 
                j++;
        }
        i++;
        
    }
    return 0;
}



