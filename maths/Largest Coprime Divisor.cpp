int Solution::cpFact(int A, int B) {
    if(__gcd(A,B)==1){
        return A;
    }
    int x=2;
    while(x<=A){
        if(A%x==0 && __gcd(A/x,B)==1){
            return A/x;
        }
        x++;
    }
    return A/x;
}


