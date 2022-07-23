#include<iostream>
#include<string>
using namespace std;
int getmax( int n)
{
    int m=0;
    while (n!=0)
    {
        m=max(m,n%10);
        n=n/10;
    }

    return m;
}
int main()
{
    string B="CD#34";
    int price=0;
    for ( int i=0;i<B.size();i++)
    {
      if(isdigit(B[i]))
      {
        price+= B[i]-'0';
      }
      else{
        price+=getmax(int(B[i]));
      }
    }
    cout<<price<<endl;
    return 0;
}