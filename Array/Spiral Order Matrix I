/*

Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]

*/

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> res;
    int t=0,b=A.size()-1,l=0,r=A[0].size()-1;
    int flag=1;
    int n=A.size()*A[0].size();
    while(t<=b&&l<=r){
        if(flag==1){
            for(int j=l;j<=r;j++)
             res.push_back(A[t][j]);
            t++;
            flag=2;
        }
        else if(flag==2){
            for(int j=t;j<=b;j++)
             res.push_back(A[j][r]);
            r--;
            flag=3;
        }
        else if(flag==3){
            for(int j=r;j>=l;j--)
             res.push_back(A[b][j]);
            b--;
            flag=4;
        }
        else if(flag==4){
            for(int j=b;j>=t;j--)
             res.push_back(A[j][l]);
            l++;
            flag=1;
        }
       /*for(int i=0;i<res.size();i++)
         cout<<res[i]<<" ";
        cout<<endl;*/
    }
    return res;
}
