vector<string> Solution::fizzBuzz(int A) {
    vector<string> v;
    int i=1;
    while(i<=A){
        if(i%3==0 && i%5==0){
            v.push_back("FizzBuzz");}
        else if(i%3==0 && i%5!=0){
            v.push_back("Fizz");
        }
        else if(i%3!=0 && i%5==0){
            v.push_back("Buzz");
        }
        else {
            string x;
            x=to_string(i);
            v.push_back(x);}
        i++;
        }
    return v;
    }


