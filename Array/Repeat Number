/*
You’re given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time and constant additional space.

If so, return the integer. If not, return -1.

If there are multiple solutions, return any one.

Example :

Input : [1 2 3 1 1]
Output : 1 
1 occurs 3 times which is more than 5/3 times. 

*/

int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int e1=INT_MAX,e2=INT_MAX;
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
    	if(count1>0 && A[i]==e1){
    		count1+=1;
    	}
    	else if(count2>0 && A[i]==e2){
    		count2+=1;
    	}
    	else if(count1==0){
    		e1=A[i];
    		count1=1;
    	}
    	else if(count2==0){
    		e2=A[i];
    		count2=1;
    	}
    	else{
    		count1--;
    		count2--;
    	}
    }
    if(count1==0 && count2==0)
    	return -1;
    int freq=0;
   if(count1){
	for(int i=0;i<n;i++){
    	if(A[i]==e1)
    		freq++;
    }
    if(freq>n/3)
    	return e1;
   }
    freq=0;
  if(count2){
    for(int i=0;i<n;i++){
    	if(A[i]==e2)
    		freq++;
    }
    if(freq>n/3)
    	return e2;
  }
    return -1;
}
