string Solution::addBinary(string A, string B) {
    int na = A.size();
    int nb = B.size();
    int n = max(na,nb);
    int carry = 0; //* only one round
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    string sum;
    for(int i = 0; i<n; i++){
        if(i < na) carry += A[i] - '0';
        if(i < nb) carry += B[i] - '0';
        sum += carry%2 + '0';
        carry /= 2;
    }
    if(carry) sum += '1';
    reverse(sum.begin(),sum.end());
    return sum;
    
}



