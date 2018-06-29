int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==0){
        return 0;
    }
    if(A<4){
        return 1;
    }
    int x=2;
    while(x<=A/2){
        if(x*x<=A && pow(x+1,2)>A)
            return x;
        x++;
    }
    return x;
}


