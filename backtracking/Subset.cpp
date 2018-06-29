void sub(vector<int> &A, int start,vector<int> temp, vector<vector<int>> &ans){
    sort(A.begin(),A.end());
    int n=A.size();
    ans.push_back(temp);
    for(int i=start;i<n;i++){
        temp.push_back(A[i]);
        sub(A,i+1,temp,ans);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> temp;
    vector<vector<int>>ans;
    sub(A,0,temp,ans);
    return ans;
}






