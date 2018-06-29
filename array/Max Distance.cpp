int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>> p;
    int arr[A.size()];
    int i=0;
    while(i<A.size()){
    p.push_back(make_pair(A[i],i));
    i++;
    }
    sort(p.begin(),p.end());
    //cout<<p[3].second<<" "<<p[3].first<<" ";
    int maxm=INT_MIN;
    for(int j=A.size()-1;j>=0;j--){
        maxm=max(maxm,p[j].second);
        //cout<<maxm<<" ";
        arr[j]=maxm;
    }
    int result=INT_MIN;
    for(int k=0;k<A.size();k++){
        //cout<<arr[k]<<" ";
        result=max(result,(arr[k]-p[k].second));
        //cout<<result;
    }
    return result;
}


