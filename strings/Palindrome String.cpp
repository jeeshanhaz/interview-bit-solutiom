int Solution::isPalindrome(string A) {
    int len=A.size();
    int l=0; int r=len-1;
    
    
    while(l<r)
    {
        if(!isalnum(A[l]) || !isalnum(A[r]))
        {
            if(!isalnum(A[l]))
            l++;
            else
            r--;
        }
        
        else 
        {
            if(tolower(A[l])==tolower(A[r]))
            {
                l++;
                r--;
            }
            
            else 
            return 0;
        }
        
        
        
    }
    
    return 1;
    
    
}



