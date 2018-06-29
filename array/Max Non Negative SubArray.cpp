vector<int> Solution::maxset(vector<int> &A) {
    vector <int > v1;
    int i=0;
    long long currsum=INT_MIN;
    long long maxsum=INT_MIN;
    int start;
    int length;
    int end;
    int anslen=0;
    int ansend=0;
    int ansstart=0;
    
    
    while(i<A.size()){
        currsum=0;
        length=0;
        start=i;
        while(i<A.size() && A[i]>=0){
            currsum=currsum+A[i];
            
            length++;
            i++;
        }
        end=i-1;
        
        if(currsum>maxsum) {
            ansstart=start;
            ansend=end;
            maxsum=currsum;
            anslen=length;
        }
        
        i++;
        
    }
    for(int j=ansstart;j<=ansend;j++){
        v1.push_back(A[j]);
    }
    return v1;
}


