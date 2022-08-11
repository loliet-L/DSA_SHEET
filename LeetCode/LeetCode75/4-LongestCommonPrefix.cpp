/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
*/
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
        if(n==0 || strs[0]==""){return ans;}
        
        for( int i =0; i<strs[0].size();i++)
        {
            int j=0;
            while(j+1<n){
                if( strs[j][i]!=strs[j+1][i])
                {
                    return ans;
                }
                
                j++;

            
            }
            ans+=strs[0][i];
        }
        return ans;
        
        
    }