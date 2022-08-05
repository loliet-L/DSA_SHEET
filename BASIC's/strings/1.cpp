#include<bits/stdc++.h>
using namespace std;
/*
Problem Statement:  Given a number check if it is a palindrome.

An integer is considered a palindrome when it reads the same backward as forward.

Examples:

Example 1:
Input: N = 123
Output: Not Palindrome Number
Explanation: 123 read backwards is 321.Since these are two different numbers 123 is not a palindrome.

*/

bool checkPalindrime( int n)
{
    int temp=n;
    int y=0;
    while(n>0)
    {
    int lastDigit=n%10;
     y=10*y+lastDigit;
    n=n/10;
    }
    if(y==temp)
    {
        return true;
    }
    return false;
}

/*
Problem Statement: Given a range of numbers, find all the palindrome numbers in the range.

Note: A palindromic number is a number that remains the same when its digits are reversed.OR 
 a palindrome is a number that reads the same forward and backward Eg: 121,1221, 2552

Examples:

Example 1:
Input: min = 10 , max = 50
Output: 11 22 33 44 
Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.
*/

vector<int> PalindromeRange(int min , int max)
{
    vector<int> ans;
    for( int i=min;i<=max;i++)
    {
        if(checkPalindrime(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}

/*
Problem Statement: Given a number, check whether it is prime or not. 
A prime number is a natural number that is only divisible by 1 and by itself.

Examples 1 2 3 5 7 11 13 17 19 …

Examples:

Example 1:
Input: N = 3
Output: Prime
Explanation: 3 is a prime number
*/

bool checkPrime( int n)
{
    if(n==1 || n==2)
    {
        return true;
    }
    int i=2;

    while(i<=sqrt(n))
    {
        if(n%i==0)
        {
            return false;
        }
        i++;
    }
    return true;
}

/*
Problem Statement: Given a number, check if it is Armstrong Number or Not.

Examples:

Example 1:
Input:153 
Output: Yes, it is an Armstrong Number
Explanation: 1^3 + 5^3 + 3^3 = 153
*/

bool isArmstrong(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}

/*
A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 

Examples:

Example 1:
Input: n=6
Output: 6 is a perfect number

Example 2:
Input: n=15
Output: 15 is not a perfect number

Example 3:
Input: n=28
Output: 28 is a perfect number
Reason:
For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.
*/


bool isPerfect(int n)
{
    int sum=1;
    int i=2;
    while(i<=n/2)
    {
        if(n%i==0 && i*10>n)
         sum+=i;
    }
    return (sum==n);
}

int main()
{
    // int n=121;
    // cout<<checkPalindrime(n);

    // int min=10,max=50;
    // vector<int> v = PalindromeRange(min,max);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }


    // int n=1;
    // for(;5;n++)
    // cout<<n;
    // cout<<"n";


    // cout<<isArmstrong(1634);

    cout<<isPerfect(6);
    return 0;
}