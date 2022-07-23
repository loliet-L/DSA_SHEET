#include<iostream>
#include<string>
using namespace std;

void replacePI(string s, int n)
{
    if(n==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePI(s.substr(2),n-2);
    }
    else{
        cout<<s[0];
        replacePI(s.substr(1),n-1);
    }
    

}


int main()
{
    string s ="pipppippipppppi";
    replacePI(s,s.size());

    return 0;
}