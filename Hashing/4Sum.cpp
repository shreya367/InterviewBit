/*Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

 Note:
Elements in a quadruplet (a,b,c,d) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
The solution set must not contain duplicate quadruplets.
Example : 
Given array S = {1 0 -1 0 -2 2}, and target = 0
A solution set is:

    (-2, -1, 1, 2)
    (-2,  0, 0, 2)
    (-1,  0, 0, 1)
Also make sure that the solution set is lexicographically sorted.
Solution[i] < Solution[j] iff Solution[i][0] < Solution[j][0] OR (Solution[i][0] == Solution[j][0] AND ... Solution[i][k] < Solution[j][k])*/

vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    int n = A.size();
    sort(A.begin(),A.end());
    int i,j;
    unordered_map<int, pair<int,int>> hash;
    vector<vector<int>> Ans;
    vector<int>temp;

    
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            hash[A[i]+A[j]] = {i,j};
        }
    }
    
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           int sum = A[i]+A[j]; 
           if(hash.find(B-sum)!=hash.end()){
            pair<int,int>p = hash[B-sum];
            if(p.first != i && p.first != j && p.second != i && p.second != j){
                temp.push_back(A[i]);
                temp.push_back(A[j]);
                temp.push_back(A[p.first]);
                temp.push_back(A[p.second]);
                sort(temp.begin(),temp.end());
                Ans.push_back(temp);
                temp.clear();
            }   
           }
        }
    }
    sort(Ans.begin(), Ans.end());
    Ans.erase(unique(Ans.begin(), Ans.end()), Ans.end());
    return Ans;
}
