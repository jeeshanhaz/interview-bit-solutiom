string charmap[10];

void letter(string &A , int index, string &temp, vector<string> &ans){
 
    if(index==A.length()){
        ans.push_back(temp);
        return; 
    }
    int digit=A[index]-'0';
    for (int i=0; i<charmap[digit].length(); i++)
    {
        temp.push_back(charmap[digit][i]);
        letter(A, index+1, temp, ans);
        temp.pop_back();
        
    }
    return ;
}


vector<string> Solution::letterCombinations(string A) {
    charmap[0] = "0";
    charmap[1] = "1";
    charmap[2] = "abc";
    charmap[3] = "def";
    charmap[4] = "ghi";
    charmap[5] = "jkl";
    charmap[6] = "mno";
    charmap[7] = "pqrs";
    charmap[8] = "tuv";
    charmap[9] = "wxyz";
    string temp="";
    vector<string> ans;
    letter(A,0,temp,ans);
    return ans;
    
    
}






