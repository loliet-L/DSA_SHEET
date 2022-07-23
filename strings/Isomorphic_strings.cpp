/*
Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for 
every character of str1 to every character of str2 while preserving the order.
Note: All occurrences of every character in str1 should map to the same character in str2

Example 1:

Input:
str1 = aab
str2 = xxy
Output: 1
Explanation: There are two different
charactersin aab and xxy, i.e a and b
with frequency 2and 1 respectively.
*/
#include<iostream>
#include<string>
using namespace std;



bool areIsomorphic(string str1, string str2)
    {
        if(str1.length() != str2.length()) return 0;
        
        char um1[256]  = {0};
        char um2[256]  = {0};
        for(int i=0; i<str1.length(); i++){
            if(um1[str1[i]] == 0 && um2[str2[i]] == 0){//storing key and value
                um1[str1[i]] = str2[i];
                um2[str2[i]] = str1[i];
            }else{//matching key and value 
                if(um1[str1[i]] != str2[i] || um2[str2[i]] != str1[i]) return 0;
            }
        }return 1;
        
    }

    