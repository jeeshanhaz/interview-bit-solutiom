vector<vector<int> > Solution::generate(int A) {
    vector<vector<int>> p;
    if(A<1){
        return p;
    }
    if(A==1){
        p.push_back({1});
        return p;
    }
    vector<vector<int>> v={{1}}; 
    for(int i=1;i<A;i++){
        vector<int> a={1};
        for(int j=1;j<i;j++){
            a.push_back(v[i-1][j]+v[i-1][j-1]);
        }
        a.push_back(1);
        v.push_back(a);
    }
    return v;
}


