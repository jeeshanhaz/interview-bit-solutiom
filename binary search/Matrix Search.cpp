int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int m=A.size();
   int n=A[0].size();
   int l=0,r=m-1,mid;
   if(B<A[0][0]||B>A[m-1][n-1]) return 0;
   while(l<=r){
    mid=l+(r-l)/2;
    if(B==A[mid][0]) return 1;
    else if(B>A[mid][0]) l=mid+1;
    else 
      r=mid-1;
   }
   l=0;
   int searchrow=r;
   r=n-1;
   while(l<=r){
       mid=l+(r-l)/2;
       if(A[searchrow][mid]==B) return 1;
       else if(A[searchrow][mid]<B) l=mid+1;
       else 
         r=mid-1;   
   }
   return 0;
} 


