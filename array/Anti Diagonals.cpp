vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {\
    vector<vector<int>> v;
    
    int n=A.size();
    if(n==0)
        return v;
    for(int i=0;i<n;i++){
        vector<int> a;
        int j=0;
        int k=i;
        while(j+k==i && j<=i && k>=0){
            a.push_back(A[j][k]);
            j++;
            k--;
            
        }
        v.push_back(a);
    }
    int i=1;
    while(i<n){
        int j=n-1;
        int k=i;
        vector<int> b;
        while(j>=i){
            b.push_back(A[k][j]);
            j--;
            k++;
        }
        v.push_back(b);
        i++;
    }

    return v;
}


