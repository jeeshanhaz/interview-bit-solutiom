int Solution::largestRectangleArea(vector<int> &A) {
        int n=A.size();
        int area=0;
        int area_top;
        stack<int> s;
        int i=0;
        int tp;
        while(i<n){
            if(s.empty() || A[i]>=A[s.top()]){
                s.push(i);
                i++;
            }
            else{
                tp=s.top();
                s.pop();
                if(!s.empty()){
                    area_top=A[tp]*(i-s.top()-1);
                }
                else {
                    area_top=A[tp]*(i);
                }
                if(area<area_top){
                    area=area_top;
                }
            }
            
        }
        while(!s.empty()){
            tp=s.top();
            s.pop();
            if(!s.empty()){
                area_top=A[tp]*(i-s.top()-1);
            }
            else {
                area_top=A[tp]*i;
            }
            if(area<area_top){
                area=area_top;
            }
        }
        return area;
}






