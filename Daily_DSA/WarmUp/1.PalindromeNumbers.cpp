// Given an integer x, return true if x is a 
// palindrome
// , and false otherwise

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x<0|| (x!=0 &&x%10==0)) return false;
    int y=0,z=x;
    while(x>0)
    {
        
        y=y*10+x%10;
        x/=10;
    }
    return y==z;
}
int main()
{
    cout<<isPalindrome(121);
    return 0;
}