// Given an undirected graph with V vertices. We say two vertices u and v belong to a single province if there is a path from u to v or v to u. Your task is to find the number of provinces.

// Note: A province is a group of directly or indirectly connected cities and no other cities outside of the group.

// Example 1:

// Input:
// [
//  [1, 0, 1],
//  [0, 1, 0],
//  [1, 0, 1]
// ]

// Output:
// 2

#include<bits/stdc++.h>
using namespace std;



void dfs(vector<vector<int>> adj,int strt,vector<bool> &vis)
   {
       vis[strt]=true;
       for(int i=0;i<adj.size();i++)
       {
           if(!vis[i] && adj[strt][i]==1) dfs(adj,i,vis);
       }
       return;
   }
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<bool>vis(adj.size(),false);
        int cnt=0;
        
        for(int i=0;i<adj.size();i++)
        {
            if(!vis[i])
            {
                dfs(adj,i,vis);
                cnt++;
            }
        }
        return cnt;
    }