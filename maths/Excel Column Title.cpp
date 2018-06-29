string Solution::convertToTitle(int A) {
    string s;
    while(A){
        int n=A%26;
        string d;
        if(n==0)
            {s=s+'Z';
            A=A/26-1;}
        else {
            d=n+64;
            s=s+d;
            A=A/26;
        }
        
        
    }
    reverse(s.begin(),s.end());
    return s;
}



