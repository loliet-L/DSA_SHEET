


#include<iostream>
#include<string>
using namespace std;

int func(int x,int z)
{
    int ans = INT_MAX;
    for( int c=1;c<10;++c)
    {
        int b = (c*(pow(10,x-1)-z))/(10*z-1);
        string a1 = to_string(b)+to_string(c);
        string a2 = to_string(c)+to_string(b);
        if(stoi(a1)*z==stoi(a2) && a1.size()==x)
        {
            ans=min(ans,stoi(a1));
        }
    }
        if(ans=INT_MAX)
        {
            ans=-1;
            return ans;
        }

    
}
int main()
{
    cout<<func(6,5)<<endl;
    return 0;
}