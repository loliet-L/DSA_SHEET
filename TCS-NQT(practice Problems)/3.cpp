/*
Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable.
The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. 
The ‘*’ and ‘#’ can be at any position in the string.
Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

(*>#): positive integer
(#>*): negative integer
(#=*): 0
Example 1:
Input 1:

###***   -> Value of S
Output :

0   → number of * and # are equal
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="##*#**#";
    int no1=0,no2=0;
    for( int i=0;i<s.size();i++)
    {
        if(s[i]=='#'){
            no1++;
        }
        else{
            no2++;
        }

    }
    // if(no1==no2){
    //     cout<<'0'<<endl;
    // }
    // else if (no2>no1)
    // {
        cout<<no2-no1<<endl;
    // }
    // else{
        // cout<<-no1+no2<<endl;
    // }
    

    return 0;
}