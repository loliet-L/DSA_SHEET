#include<bits/stdc++.h>
using namespace std;

//  T.C -> O(N)+0(2E)  S.C  ->  O(3N) ==  O(N)
void BFS(vector<int> adj[],int strt,int n)
{
    queue<int>q;
    int vis[n+1]={0};
    q.push(strt);
    vis[strt]=1;

    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        for(auto i: adj[temp])
        {
            if(!vis[i])
            {
                q.push(i);
                vis[i]=1;
            }
        }
        cout<<temp<<" ";
    }
}


//  T.C -> O(N)+0(2E)  S.C  ->  O(N)
void DFS(vector<int> adj[],int strt,bool vis[])
{
    vis[strt]=true;
    cout<<strt<<" ";
    for(auto i:adj[strt])
    {
        if(!vis[i])DFS(adj,i,vis);
    }
    return;

}

int main()
{
    int n,m;
    cin>>n>>m;
 
    vector<int> adj[n+1];
    // Below line only for weighted graphs
    // vector<pair<int,int>> adj[n+1];

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        // BELOW LINE IS FOR UNDIRECTED GRAPH ONLY

        adj[v].push_back(u);
    }

   BFS(adj,1,5);
   bool vis[n+1]={false};
   cout<<"\n";
   DFS(adj,1,vis);
    return 0;
}
