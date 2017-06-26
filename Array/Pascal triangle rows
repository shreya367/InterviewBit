//https://www.interviewbit.com/problems/pascal-triangle-rows/
/*

Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

*/

//First Approach

vector<vector<int> > Solution::generate(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int> >res(A);
    for(int i=0;i<A;i++){
        for(int j=0;j<=i;j++)
         res[i].push_back(1);
    }
    for(int i=2;i<A;i++){
        for(int j=1;j<i;j++){
         res[i][j]=res[i-1][j]+res[i-1][j-1];
         //cout<<res[i][j]<<endl;
        }
    }
    return res;
}


//Second Approach

vector<vector<int> > Solution::generate(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int> >v(A);
    int c=1;
    for(int i=0;i<A;i++){
        for(int j=0;j<=i;j++){
            v[i].push_back(1);
        }
    }
    for(int i=1;i<A;i++){
        c=1;
        for(int j=1;j<=i;j++){
            v[i][j]=c*(i-j+1)/j;
            c=v[i][j];
        }
    }
    return v;
}
