void csum(vector<int> &A, vector<vector<int>> &ans, vector<int> temp,int B, int index){
    if(B==0){
        ans.push_back(temp);
    }
    if(B<0){
        return ;
    }
    
    while(index<A.size() && B-A[index]>=0){
        temp.push_back(A[index]);
        csum(A,ans,temp,B-A[index],index);
        index++;
        temp.pop_back();
    }





