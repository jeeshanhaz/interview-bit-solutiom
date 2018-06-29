void comb(int A,int B, int index,int i,vector<int> &temp,vector<vector<int>> &ans){
    
    if(index==B){
        ans.push_back(temp);
        return;
    }
    
    if(i>A){
        return ;
    }
    temp.push_back(i);
    comb(A,B,index+1,i+1,temp,ans);
    temp.pop_back();
    comb(A,B,index,i+1,temp,ans);
    
    return ;
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> temp;
    vector<vector<int>> ans;
    comb(A,B,0,1,temp,ans);
    return ans;
    
}






