#include<bits/stdc++.h>
using namespace std;

bool isBipartite(vector<int> &adj,int n,vector<int>vis)
{
    queue<int> q;
    q.push(1);
    int color =0;
    vis[0]=color;

    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        color = vis[x-1]==0? 1:0;
         for(auto i: adj[x])
         {
            if(vis[i-1]!=-1)
            {
                vis[i-1]=color;
                q.push(i);
            }
            if(vis[x-1] == vis[i-1])return false;
         }
    }

    return true;

}

int main()
{
    int n,m;
    cin>>n>>m;
 
    vector<int> adj[n+1];
    vector<int> vis(-1,n);

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    cout<<isBipartite(adj,n,vis);


}
