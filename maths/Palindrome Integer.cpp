int Solution::isPalindrome(int A) {
    if(A<0)
        return 0;
    int n=0;
    int B=A;
    while(B!=0){
        int remain=B%10;
        n=n*10+remain;
        B=B/10;
    }
    if(A==n)
        return 1;
    return 0;
}


