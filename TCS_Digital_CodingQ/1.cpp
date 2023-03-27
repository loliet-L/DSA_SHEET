#include<iostream>
#include<vector>>
using namespace std;



bool Solution(int N,int x)
{
    

    while(N>0)
    {
        int l1=N%10;
        int l2=x%10;
        if(l1!=l2)
        {
            return false;
        }
        N/=10,x/=10;

    }
    return true;
}

int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}


int main()
{
    // int N=6;
    // int a=2,b;
    // while(a<sqrt(N))
    // {
    //     if(N%a==0)
    //     {b=N/a;
    //       if((lcm(a,b)/gcd(a,b))==N)cout<<a<<" "<<b<<endl;

    //     }
    //     a++;
    // }
    // cout<<-1<<endl;


   int I,O,R;
   cin>>I>>O>>R;
   vector<int>in(I,0),out(O,0);
   int IN_SUM=0,OUT_SUM=0;
   for(int i=0;i<I;i++)
   {
    cin>>in[i];
    in[i]-=R;
    IN_SUM+=in[i];
   }
   for(int j=0;j<O;j++)
   {
    cin>>out[j];
    out[j]-=R;
    OUT_SUM+=out[j];
   }

   if(IN_SUM==OUT_SUM)cout<<"BALANCED";
   else{
    if(IN_SUM>OUT_SUM)cout<<OUT_SUM-IN_SUM-R<<endl;
    else cout<<OUT_SUM-IN_SUM+R<<endl;
   }



    return 0;
}  
