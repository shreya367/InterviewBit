//https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

/*

Given an index k, return the kth row of the Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Input : k = 3

Return : [1,3,3,1]
 NOTE : k is 0 based. k = 0, corresponds to the row [1]. 
Note:Could you optimize your algorithm to use only O(k) extra space?

*/
vector<int> Solution::getRow(int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v(k+1);
    if(k==0){
        v[0]=1;
        return v;
    }
    int c=1;
    v[0]=c;
    for(int j=1;j<=k;j++){
        v[j]=c*(k-j+1)/j;
        c=v[j];
    }
    return v;
}
