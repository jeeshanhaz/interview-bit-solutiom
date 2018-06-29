vector<int> Solution::getRow(int A) {
    vector<int> a;
    if(A<1)
        return a;
    vector<int> v={1};
    for(int i=1;i<=A;i++){
        int result=1;
        for(int j=1;j<i;j++){
            result=result*(A-j)/j;
        }
        result=result*A/i;
        v.push_back(result);
       
        
    }
    return v;
}


