/*
Given a string s, return the longest palindromic substring in s.

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
*/
#include<iostream>
#include<string>
using namespace std;

string LongestPalindromicSubstr(string s)
{
    int n=s.size();
    int l,h;
    int start=0,end=1;
    for ( int i =1;i<n;i++)
    {
        l=i-1;
        h=i;
        while(l>=0 && h<n && s[l]==s[h])
        {
            if(h-l+1>end)
            {
                start=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
        l=i-1;
        h=i+1;
        while(l>=0 && h<n && s[l]==s[h])
        {
            if(h-l+1>end)
            {
                start=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
    }
    return s.substr(start,end);
}

int main()
{
    string s="bababd";
    cout<<s.size()<<endl;
    cout<<LongestPalindromicSubstr(s)<<endl;
    return 0;
}
