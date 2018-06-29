bool ispalindrome(string A,int low, int high){
    while(low<high){
        if(A[low]!=A[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}

void part(string A, int index, vector<string> &temp, vector<vector<string>> &ans){
    if(index==A.length()){
        ans.push_back(temp);
        return ;
    }
    
    for(int i=index;i<A.length();i++){
        
        if (ispalindrome(A,index,i))
        {
            // Add the substring to result
           // currPart.push_back(str.substr(start, i-start+1));
            temp.push_back(A.substr(index,i-index+1));
 
            // Recur for remaining remaining substring
            part(A,i+1, temp, ans);
             
            // Remove substring str[start..i] from current 
            // partition
            temp.pop_back();
        }
        
    }
    return ;
}


vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<string>> ans;
    vector<string> temp;
    part(A,0,temp,ans);
    return ans;
}






