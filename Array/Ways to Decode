int Solution::numDecodings(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    vector<int>a;
    for(int i=0;i<n;i++){
       if(A[i]-'0'!=0) a.push_back(A[i]-'0');
       else{
           if(i<1||A[i-1]-'0'>2||A[i-1]-'0'<1)
             return 0;
            else
             a[i-1]=(A[i-1]-'0')*10+(A[i]-'0');
       }
    }
  n=a.size();
/*  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl<<n<<endl;*/
    int d[n];
     d[0]=1;
    if(a[0]*10+a[1]<=26)
     d[1]=2;
    else 
     d[1]=1;
    for(int i=2;i<n;i++){
        if(a[i-1]*10+a[i]<=26&&a[i]<10)
         d[i]=d[i-1]+d[i-2];
        else 
         d[i]=d[i-1];
    }
   /* for(int i=0;i<n;i++)
    cout<<d[i]<<" ";
    cout<<endl;*/
    return d[n-1];
}
