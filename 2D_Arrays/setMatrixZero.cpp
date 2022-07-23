#include <iostream>
#include<vector>
#include<set>
using namespace std;

 void setZeroes(vector<vector<int>>& M) {
        int n=M.size(); // rows number
int m=M[0].size(); // column numbers
set<int>c,r; // storing the rows and col that we have to make completely 0
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(M[i][j]==0){
            r.insert(i); // inserting in set of row
            c.insert(j); // inserting in set of col
        }
    }
}
for(auto it:r){
    for(int i=0;i<m;i++){
        M[it][i]=0; // making column zero
    }
}
for(auto it:c){
    for(int i=0;i<n;i++){
        M[i][it]=0; // making row zero
    }
}
        
    }