int Solution::gcd(int A, int B) {
    if(A<B)
        {int temp=A;
        A=B;
        B=temp;}
    if(B==0){
        return A;
    }
    if(A%B==0){
        return B;
    }
    int i=1;
    int c=0;
    while(i<=B/2){
        if(A%i==0 && B%i==0){
            c=i;
        }
        i++;
    }
    return c;
}


