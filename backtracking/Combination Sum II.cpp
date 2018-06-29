void sum(vector<int> &A, int B,int index,vector<int> &temp,vector<vector<int>> &ans){
    if(B==0){
        ans.push_back(temp);
        return ;
    }
    if(B<0){
        return ;
    }
    while(index<A.size()){
    if(B-A[index]>=0){
        temp.push_back(A[index]);
        sum(A,B-A[index],index+1,temp,ans);
        temp.pop_back();
        
    }
    index++;
    }
    //cout<<temp[0]<<" ";
    return;
    
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    vector<int> temp;
    sum(A,B,0,temp,ans);
    vector<vector<int>> v=ans;
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    return v;
    
}






