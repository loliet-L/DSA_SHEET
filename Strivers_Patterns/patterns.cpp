#include<bits/stdc++.h>
using namespace std;


void pattern1(int n)
{
        //    *
        //   ***
        //  *****
        // *******  

        for(int i=0;i<n;i++)
        {
            // *space
            for(int s=0;s<n-i-1;s++)cout<<" ";
            // * star
            for(int j=0;j<2*i+1;j++)cout<<"*";
            // *space
            for(int s2=0;s2<n-i-1;s2++)cout<<" ";

            cout<<endl;
            
        }
}


void pattern2(int n)
{
    //    *******
    //     *****
    //      ***
    //       * 

        for(int i=0;i<n;i++)
        {
            // *space
            for(int s=0;s<i;s++)cout<<" ";
            // * star
            for(int j=0;j<2*(n-i)-1;j++)cout<<"*";
            // *space
            for(int s2=0;s2<i;s2++)cout<<" ";

            cout<<endl;
            
        }
}

void pattern3(int n)
{
    // ****
    // *  *
    // *  *
    // ****

        for(int i=0;i<n;i++)
        {
            for( int j=0;j<n;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==n-1) cout<<"*";
                else cout<<" ";
            }

            cout<<endl;
            
        }
}

int main()
{
    int n;
    cin>>n;
     pattern3(n);
}