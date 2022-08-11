/*
Given an integer n, your task is to count how many strings of length n can be formed under the following rules:

Each character is a lower case vowel ('a', 'e', 'i', 'o', 'u')
Each vowel 'a' may only be followed by an 'e'.
Each vowel 'e' may only be followed by an 'a' or an 'i'.
Each vowel 'i' may not be followed by another 'i'.
Each vowel 'o' may only be followed by an 'i' or a 'u'.
Each vowel 'u' may only be followed by an 'a'.
Since the answer may be too large, return it modulo 10^9 + 7.

 

Example 1:

Input: n = 1
Output: 5
Explanation: All possible strings are: "a", "e", "i" , "o" and "u".
*/
#include<bits/stdc++.h>
using namespace std;

//   <<<--------BOTTOM UP---------->>> --> <<---DP--->>
int countVowelPermutation(int n) {
        const int MOD = 1e9 + 7;
        long a = 1, e = 1, i = 1, o = 1, u = 1, a_new, e_new, i_new, o_new, u_new;
        for(int j = 2; j <= n; j++) {
            a_new =  e;
            e_new = (a + i) % MOD;
            i_new = (a + e + o + u) % MOD;
            o_new = (i + u) % MOD;
            u_new =  a;
            a = a_new, e = e_new, i = i_new, o = o_new, u = u_new;
        }
        return (a + e + i + o + u) % MOD;
    }


// video solution ---->
    // https://www.youtube.com/watch?v=uT67nkKEueE