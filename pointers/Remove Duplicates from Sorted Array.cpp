int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    if(n==1){
        return 1;
    }
    int i=0;
    int j=0;
    while(j<A.size()-1){
        if(A[j]!=A[j+1]){
            A[i]=A[j];
            i++;
        }
        j++;
    }
    A[i]=A[j];
    i++;
    return i;
}



