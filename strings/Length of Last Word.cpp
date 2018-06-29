int Solution::lengthOfLastWord(const string A) {
    int n=A.size()-1;
    int count=0;
    while(n>=0){
        if(A[n]==' '){
            n--;
        }
        else break;
    }
    while(n>=0){
        if(A[n]!=' '){  
            count++;
            n--;}
        else break;
    }
    return count;
}



