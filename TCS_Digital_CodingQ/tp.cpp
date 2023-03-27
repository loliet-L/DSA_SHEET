#include<bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    for(int i=0;i<sqrt(n);i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}

int main()
{

    int n=10;
    int res=1;
    if(isPrime(n))cout<<"Not Possible";
    else{
        int i=2;
       while(n)
       {
         while(n%i==0)
         {
            
         }
       }

    }
    
    
    return 0;
}


