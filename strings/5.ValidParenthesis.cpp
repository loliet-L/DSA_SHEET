/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
*/
#include <iostream>
#include<string>
using namespace std;
bool isValid(string s) {
        // char arr[s.length()+1];
        int n=s.length();
        for (int i =0;i<s.length();i++)
        {
            if(s[i]!=s[n-1-i])
            {
                return false;
            }

        }
        return true;
        
    }