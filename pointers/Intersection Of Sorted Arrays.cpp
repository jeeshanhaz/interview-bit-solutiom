vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int na=A.size();
    int nb=B.size();
    int i=0;
    int j=0;
    vector<int> v;
    while(i<na && j<nb){
            if(A[i]==B[j]){
                v.push_back(A[i]);
                i++;
                j++;
            
            }
            else if(A[i]<B[j]){
                i++;
            }
            else j++;
    }
    return v;
}



