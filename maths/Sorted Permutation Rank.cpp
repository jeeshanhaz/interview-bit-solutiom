int Solution::findRank(string A) {
    
    int n=A.length();
    int arr[n-1];
    int count;
    
    for(int i=0;i<n-1;i++){
            count=0;
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]){
                count++;
        }
    }
    arr[i]=count;
    }
    long long sum=0;
    for(int i=0;i<n-1;i++){
        long long prod=1;
        for(int j=n-1-i;j>0;j--){
            prod=prod*j%1000003;
        }
        sum=sum+(arr[i]*prod)%1000003;
    }
    return (sum+1)%1000003;
}


