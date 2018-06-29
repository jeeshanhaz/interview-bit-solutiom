//Add One To Number

vector<int> Solution::plusOne(vector<int> &A) {

    
    //cout<<n<<endl;
    
    int i=0;
    while(A[i]==0&&!A.empty())
    {A.erase(A.begin());}
    int n=A.size()-1;
    //cout<<n;
    if(A.empty())
    {A.push_back(1);
        return A;
    }
    else
    {
    while(A[n]==9)
    {
        A[n]=0;
        n--;
    }
    if(n==-1)
    {A.insert(A.begin(),1);}
    else
    {A[n]=A[n]+1;}
    }
    return A;
    

}

