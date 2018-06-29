string Solution::intToRoman(int A) {
    int count;
    int i;
    
    string str;
    while(A>0){
    if(A>=1000){
        count=A/1000;
        i=0;
        while(i<count){
            str.push_back('M');
            i++;
        }
        A=A%1000;
    }
    else if(A>=500){
        if(A>=900){
        str.push_back('C');
        str.push_back('M');
        A=A%900;
        }
        else {
            str.push_back('D');
            A=A%500;
        }
    }
    else if(A>=100){
        count=A/100;
        if(count==4){
            str.push_back('C');
            str.push_back('D');
        }
        else{
        i=0;
        while(i<count){
            str.push_back('C');
            i++;
        }}
        A=A%100;
        
    }
    else if(A>=50){
        if(A>=90){
        str.push_back('X');    
        str.push_back('C');
        A=A%90;
    }
    else{
        str.push_back('L');
        A=A%50;
    }
    }
    else if(A>=10){
        count=A/10;
        if(count==4){
            str.push_back('X');
            str.push_back('L');
        }
        else {
        i=0;
        while(i<count){
            str.push_back('X');
            i++;
        }}
        A=A%10;
    }
    else if(A>=5){
        if(A==9){
            str.push_back('I');
            str.push_back('X');
            break;
        }
        
        else{
        str.push_back('V');}
        A=A%5;
    }
    else if(A>=1){
        count=A;
        if(count==4){
        str.push_back('I');
        str.push_back('V');
        break;
    }
    
    else{
        
        i=0;
        while(i<count){
            str.push_back('I');
            i++;
        }}
        
        A=A%1;
    }
    }
    return str;
    
}



