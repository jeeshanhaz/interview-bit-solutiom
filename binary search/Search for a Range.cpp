vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    vector<int> v;
    if(A.size()-1==1 && A[0]==B){
        v.push_back(0);
        v.push_back(0);
        return v;
    }
    
    int i=0;
    int l=A.size()-1;
    int mid;
    int min=-1;
    while(i<=l){
        mid=(i+l)/2;
        if(A[mid]==B){
            min=mid;
            l=mid-1;
        }
        else if(A[mid]<B){
            i=mid+1;
        }
        else {
            l=mid-1;
        }
    }
    
    v.push_back(min);
    
    if(min!=-1){
    int max=min;
    int k=min;
    int f=A.size()-1;
    int m;
    while(k<=f){
        m=(k+f)/2;
        if(A[m]==B){
            max=m;
            k=m+1;
        }
        else if(A[m]<B){
            k=m+1;
        }
        else{
            f=m-1;
        }
    }
    v.push_back(max);
}
    else v.push_back(-1);
}



