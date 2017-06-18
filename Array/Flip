vector<int> Solution::flip(string A) {
    vector<int>c;
    int i=0;
    while(A[i]=='1'){
        i++;
    }
    if(i==A.length()) return c;
    int n=A.length();
    int b[n];
    for(i=0;i<n;i++){
        if(A[i]=='0')
         b[i]=1;
        else
         b[i]=-1;
        // cout<<b[i]<<" ";
    }
    int max_so_far=INT_MIN,max_ending_here=0,start=0,end=0;
    c.push_back(start+1);c.push_back(end+1);
    for(i=0;i<n;i++){
        max_ending_here=max_ending_here+b[i];
        end++;
        if(max_so_far<max_ending_here){
         max_so_far=max_ending_here;
         c[0]=start+1;c[1]=end;
        }
         if (max_ending_here < 0){
           //  cout<<"Hello\n";
            max_ending_here = 0;
            start=i+1;end=i+1;
         }
    }
   // vector<int>c;
    
    return c;
}
