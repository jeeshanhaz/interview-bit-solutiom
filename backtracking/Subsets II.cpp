void subset(vector<int> &A, vector<int> &temp, vector<vector<int>> &ans,int index){
    
    
    ans.push_back(temp);
    if(index==A.size()){
        return;
    }
    
    
    while(index<A.size()){
        temp.push_back(A[index]);
        subset(A,temp,ans,index+1);
        temp.pop_back();
        index++;
    }
    return ;
    
    
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    
    vector<vector<int>> ans;
    vector<int> temp;
    subset(A,temp,ans,0);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    return ans;
}






