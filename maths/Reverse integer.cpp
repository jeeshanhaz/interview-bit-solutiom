int Solution::reverse(int A) {
    int b=A;
    long n=0;
    while(b){
        int remain=b%10;
        n=n*10 + remain;
        b=b/10;
    }
    
    if(n>2147483647 || n<-2147483648)
       { return 0;}
    else return n;
}


