#include<bits/stdc++.h>
using namespace std;

int main()

{
int n=100;
vector<int>prime;
vector<bool> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;

for(int i=2;i<=n;i++)
{
    if(is_prime[i])
    {
    prime.push_back(i);
    for(int j=2;j*i<=n;j++)
    {
        is_prime[j*i]=false;
    }
    }

}
for(auto i:prime)cout<<i<<' ';
    

    return 0;
}