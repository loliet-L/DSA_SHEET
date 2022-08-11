/*
Given a string s, reverse the order of characters in each word within a sentence while still 
preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
*/

#include<bits/stdc++.h>
using namespace std;


//  <<--------------MY SOLUTION 2 PTR APPROACH ----------------->>  TC-> O(N)  S.P->O(1)

void r( string &s,int start,int end)
{
    while(start<end)
    {
        swap(s[start],s[end]);
        start++,end--;
    }
}
    string reverseWords(string s) {
        int j=0,n=s.size()-1;
        for(int i=0;i<n+1;i++)
        {
            if(s[i+1]==' '|| i==n)
            {
                r(s,j,i);
                j=i+2;
            }
        }
        
       return s; 
    }