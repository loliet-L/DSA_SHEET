/*
Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2,
also represented as a string.

!!!Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.!!!

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
*/
#include <bits/stdc++.h>
using namespace std;

// solution link ----->>>>
// https://leetcode.com/problems/multiply-strings/discuss/1563536/C%2B%2B-Simple-Solution-w-Explanation-and-Images-or-School-%2B-Optimized-Multiplication

string multiply(string A, string B) {
        if(A == "0" || B == "0") return "0";
        string ans(A.size()+B.size(), '0');
        for(int i = A.size()-1; i >= 0; i--) {
            for(int j = B.size()-1; j >= 0; j--) {
                int res = (ans[i+j+1]-'0') + (A[i]-'0') * (B[j]-'0');
                ans[i+j+1] = res%10 + '0';  // ones place of multiplication result
                ans[i+j] += res/10;         // carry over to previous index if result >= 10
            }
        }
        if(ans[0] == '0') return ans.substr(1);
        return ans;
        
        
    }