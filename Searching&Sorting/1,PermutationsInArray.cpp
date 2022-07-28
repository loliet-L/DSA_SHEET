/*
Given two arrays of equal size N and an integer K. The task is to check if after permuting both arrays,
 we get sum of their corresponding element greater than or equal to k i.e Ai + Bi >= K for all i (from 0 to N-1). 
 Return true if possible, else false.
 
Example 1:

Input : 
a[] = {2, 1, 3}, 
b[] = { 7, 8, 9 }, 
k = 10. 
Output : 
True
Explanation:
Permutation  a[] = { 1, 2, 3 } 
and b[] = { 9, 8, 7 } 
satisfied the condition a[i] + b[i] >= K.

*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a,a+n );
        sort(b,b+n, greater<int>());
       for(int i=0; i<n; i++)
       {if(a[i] + b[i] >= k){
           return true;
       }
       }
       return false;
   
    }
};