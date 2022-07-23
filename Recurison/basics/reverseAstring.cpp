#include<iostream>
#include<string>
using namespace std;

void reverse(string s, int n)
{
    if(n==0)
    {
        return;
    }
    
        reverse(s.substr(1),n-1);
        cout<<(s[0]);
    

}


int main()
{
    string s ="vivek";
    reverse(s,s.size());

    return 0;
}