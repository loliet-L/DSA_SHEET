/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
*/

#include<bits/stdc++.h>
using namespace std;

// << TWo pointer Approach  >>  T.C O(N/2) S.C O(1)

void reverseString(vector<char>& s) {
        int strt=0,end=s.size()-1;
        while(strt<end)
        {
            swap(s[strt++],s[end--]);
            
        } 
    }