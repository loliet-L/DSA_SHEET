/*
Given an even number N (greater than 2), return two prime numbers whose sum will be equal to given number. 
There are several combinations possible. Print only the pair whose minimum value is the smallest 
among all the minimum values of pairs and print the minimum element first.

Example 1:

Input: N = 74
Output: 3 71
Explaination: There are several possibilities 
like 37 37. But the minimum value of this pair 
is 3 which is smallest among all possible 
minimum values of all the pairs.
*/
#include<bits/stdc++.h>
using namespace std;

bool isprime(int k){
       for(int i=2;i<=sqrt(k);i++){
           if(k%i==0){
               return false;
           }
       }
       return true;
   }
   	
    
vector<int> primeDivision(int N){
        if(N<2){
            return {0,0};
        }
        vector<int> ans;
        
        for(int i=2;i<=N;i++)
        {
            if(isprime(i))
            {
                int i2=N-i;
                if(isprime(i2))
                {
                    ans.push_back(i);
                    ans.push_back(i2);
                    return ans;
                }
            }
        }
        return {-1,-1};
    }