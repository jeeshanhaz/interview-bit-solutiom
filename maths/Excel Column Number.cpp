int Solution::titleToNumber(string A) {
    int n=A.length();
    int i=0;
    int number=0;
    while(i<n){
        number=number+pow(26,i)*(A[n-1-i]-'A'+1);
        i++;
    }
    return number;
    
}


