#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch =s[0];
    string ans =removeDuplicates(s.substr(1));
    if(ch==s[0])
    {
        return ans;
    }
    
        return (ch+ans);
    


}

int main()
{
    // string s ="pipppippipppppi";
    cout<<removeDuplicates("pipppippipppppi")<<endl;

    return 0;
}