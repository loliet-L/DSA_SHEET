#include<iostream>
#include<string>
using namespace std;

int coutPath( int s, int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int ans=0;
    for ( int i =1; i<=6;i++)
    {
        ans+=coutPath(s+i,e);
    }
    return ans;
}

int main()
{
    cout<<coutPath(0,3)<<endl;
    return 0;
}