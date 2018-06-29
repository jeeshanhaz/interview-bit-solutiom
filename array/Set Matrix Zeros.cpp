void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int R=A.size();
    int C=A[0].size();
    bool row_flag = true;
    bool col_flag = true;
 
    // updating the first row and col if 1
    // is encountered
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (i == 0 && A[i][j] == 0)
                row_flag = false;
 
            if (j == 0 && A[i][j] == 0)
                col_flag = false;
 
            if (A[i][j] == 0) {
 
                A[0][j] = 0;
                A[i][0] = 0;
            }
        }
    }
 
    
    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
 
            if (A[0][j] == 0 || A[i][0] == 0) {
                A[i][j] = 0;
            }
        }
    }
 
    if (row_flag == false) {
        for (int i = 0; i < C; i++) {
            A[0][i] = 0;
        }
    }
 
    if (col_flag == false) {
        for (int i = 0; i < R; i++) {
            A[i][0] = 0;
        }
    }
}


