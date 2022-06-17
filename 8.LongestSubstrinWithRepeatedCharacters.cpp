/*
You are given a string s and an integer k. You can choose any character of the string 
and change it to any other uppercase English character. You can perform this operation at most k times.
Return the length of the longest substring containing the same letter you can get after
 performing the above operations.

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
*/
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


// time complexity O(n)
int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0; //start window(left window)
        int r=0;//end widow(right window)
        int res=0;
        int maxCount=0;
        unordered_map<char,int>count;
        while(r<n){
            count[s[r]]++;    //it count all the char 
            maxCount=max(maxCount,count[s[r]]);
            
            if(r-l+1-maxCount>k){  //if (window length - max frequency char >k) means window is not valid so shrink it
                count[s[l]]--;//shrink the window length
            l++;     
            }   
             res=max(res,r-l+1); 
               r++;   
        }
        return res;
    }
