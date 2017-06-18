int Solution::canJump(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,n=A.size();
    int dp[n-1];
    for(i=0;i<n-1;i++){
        if(A[i]<1)
         break;
    }
    if(i==n-1)
      return 1;
    for(i=0;i<n-1;i++){
        if(i+A[i]<n) dp[i]=i+A[i];
        else dp[i]=n-1;
    }
  /* for(int i=0;i<n-1;i++)
     cout<<dp[i]<<" ";
    cout<<endl;*/
     for(i=n-3;i>=0;i--){
        if(A[i]!=0){
        for(int k=i+A[i];k>=i+1;k--)
           dp[i]=max(dp[i],dp[k]);
        }
     }
  /*for(int i=0;i<n-1;i++)
     cout<<dp[i]<<" ";
    cout<<endl;*/
    if(dp[0]>=n-1) return 1;
    else return 0;
}
