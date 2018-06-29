int Solution::romanToInt(string A) {
    int n=A.size();
    int i=0;
    int result=0;
    while(i<n-1){
        if(A[i]=='I' && (A[i+1]!='V' && A[i+1]!='X')){
            result=result+1;
        }
        else if(A[i]=='I' && (A[i+1]=='V' || A[i+1]=='X')){
            result=result-1;}
        else if(A[i]=='V' ){
            result=result+5;
        }
        else if(A[i]=='X' && (A[i+1]!='L' && A[i+1]!='C')){
            result=result+10;
        }
        else if(A[i]=='X' && (A[i+1]=='L'|| A[i+1]=='C')){
            result=result-10;}
        else if(A[i]=='L' && A[i+1]!='C'){
            result=result+50;
        }
        else if(A[i]=='C' && (A[i+1]!='D' && A[i+1]!='M')){
            result=result+100;
        }
        else if(A[i]=='C' && (A[i+1]=='D' || A[i+1]=='M')){
            result=result-100;
        } 
        else if(A[i]=='D' && A[i+1]!='M'){
            result=result+500;
        }
        else if(A[i]=='M'){
            result=result+1000; 
        } 
        i++;
    }
    //cout<<result<<endl;
    if(A[i]=='I'){
            result=result+1;
        }
        else if(A[i]=='V' ){
            result=result+5;
        }
        else if(A[i]=='X'){
            result=result+10;
        }
        else if(A[i]=='L'){
            result=result+50;
        }
        else if(A[i]=='C'){
            result=result+100;
        }
        else if(A[i]=='D'){
            result=result+500;
        }
        else if(A[i]=='M'){
            result=result+1000; 
        } 
    
    return result;
}



