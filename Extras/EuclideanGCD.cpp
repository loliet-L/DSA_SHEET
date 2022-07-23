

// Optimized way to find GCD


#include<iostream>
using namespace std;
int gcd( int a,int b)
{
    while(b!=0)
    {int remainder = a%b;
    a=b;
    b=remainder;}
    return a;
}

int main()
{
    int a=42,b=24;
    cout<<gcd(a,b)<<endl;
    return 0;
}