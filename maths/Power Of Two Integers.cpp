int Solution::isPower(int A) {
    if(A==1)
        return 1;
    int a=2;
    int p=2;
    while(pow(a,p)<=A){
        while(pow(a,p)<=A){
            if(pow(a,p)==A)
                return 1;
            p++;}
            p=2;
        a++;
    }
    return 0;
}


