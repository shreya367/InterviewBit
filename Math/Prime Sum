/*
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d] 

If a < c OR a==c AND b < d. 

*/

vector<int> Solution::primesum(int n) {
    vector<bool> isprime(n+1);
    //memset(isprime,1,sizeof(isprime));
    for(int i=0;i<=n;i++)
     isprime[i]=1;
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*2;j<=n;j+=i)
             isprime[j]=0;
        }
    }
    vector<int>ans(2);
    for(int i=2;i<=n/2;i++){
        if(isprime[i]&&isprime[n-i]){
            ans[0]=i;
            ans[1]=n-i;
            return ans;
        }
    }
}
