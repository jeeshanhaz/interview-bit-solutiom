void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void make(vector<int> &A,int curr,vector<int> temp,vector<bool>visited,vector<vector<int>> &ans){
    int n = A.size();
    
    curr = curr%n;
    
    for(int i = curr; i < n; i++){
        if(!visited[i]){
            vector<int> temp1(temp);
            vector<bool> visited1(visited);
            temp1.push_back(A[i]);
            visited1[i] = true;
            make(A, i+1,  temp1,visited1, ans);
        }
    }

    for(int i=0;i<curr;i++){
        if(!visited[i]){
            vector<int> temp1(temp);
            vector<bool>visited1(visited);
            temp1.push_back(A[i]);
            visited1[i]=true;
            make(A,i+1,temp1,visited1,ans);
    }
    }
    if(temp.size()==n){
        ans.push_back(temp);
    }

}


vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<int> temp;
    vector<vector<int> >ans;
    vector<bool> visited(A.size(),false);
    make(A,0,temp,visited,ans);
    
    return ans;
    
}






