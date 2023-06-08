// TO DETECT A CYCLE IN UNDIRECTED GRAPH
#include<bits/stdc++.h>
using namespace std;


// using BFS 
bool detect(vector<int> adj[],vector<int>vis,int src)
{
    queue<pair<int,int>>q;
    q.push(pair{src,-1});
    vis[src]=1;

    while(!q.empty())
    {
        int temp=q.front().first;
        int s = q.front().second;
        q.pop();

        for(auto i:adj[temp])
        {
            if(!vis[i])
            {
                q.push(pair{i,temp});
                vis[i]=1;
            }
            else if(i!=temp)return true;
        }
    }
    return false;
}

bool DetectCycle(vector<int> adj[],int V)
{
    int vis[V]={0};

    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            // USING BFS
            if(detect(adj,vis,i)) return true;
            //  USING DFS
            if(dectectUsingDFS(adj,vis,i,-1))return true;
        }
    }
    return false;
}

// USING DFS

bool dectectUsingDFS(vector<int>adj[],vector<int>vis,int src,int parent)
{
    vis[src]=1;

    for(auto i:adj[src])
    {
        if(!vis[i])
        {
            if(dectectUsingDFS(adj,vis,i,src))return true;
        }
        else if(i!=parent)return true;
    }
    return false;
}


