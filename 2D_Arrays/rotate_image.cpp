#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*
            With simple 2x2 Example
            ━━━━━━━━━━━━━━━━━━━━━━━
        */
        
       int n = matrix.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
                    
                /*
                   ┏━━━━━━━━━┓         ┏━━━━━━━━━┓         ┏━━━━━━━━━┓         
                   ┃ 1. Step ┃    ↺    ┃ 2. Step ┃   -->   ┃ 3. Step ┃         
                   ┗━━━━━━━━━┛         ┗━━━ ⇅ ━━━┛         ┗━━━━━━━━━┛

                      i = 0     (+1)      i = 1               i = 1
                      j = 0               j = 0       +1      j = 1 
                      
                  [i][j] ⇄ [j][i]          ...                 ...
                    ┏━━━┳━━━┓           ┏━━━┳━━━┓           ┏━━━┳━━━┓           
                    ┃(a)┃ b ┃           ┃ a ┃(b)┃           ┃ a ┃ e ┃           
                    ┣━━━╋━━━┫           ┣━━━⇅━━━┫           ┣━━━╋━━━┫           
                    ┃ e ┃ f ┃           ┃(e)┃ f ┃           ┃ b ┃(f)┃           
                    ┗━━━┻━━━┛           ┗━━━┻━━━┛           ┗━━━┻━━━┛           
                    
                */
            }
        }
        
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
            
            /*
                   ┏━━━━━━━━━┓         ┏━━━━━━━━━┓         ┏━━━━━━━━━┓
                   ┃ 1. Step ┃   ↺     ┃ 2. Step ┃   -->   ┃  Final  ┃
                   ┗━━━ ⇆ ━━━┛         ┗━━━ ⇆ ━━━┛         ┗━━━━━━━━━┛
                    ┏━━━┳━━━┓           ┏━━━┳━━━┓           ┏━━━┳━━━┓
                    ┃(a)⇆(e)┃           ┃ e ┃ a ┃           ┃ e ┃ a ┃
                    ┣━━━╋━━━┫           ┣━━━╋━━━┫           ┣━━━╋━━━┫
                    ┃ b ┃ f ┃           ┃(b)⇆(f)┃           ┃ f ┃ b ┃
                    ┗━━━┻━━━┛           ┗━━━┻━━━┛           ┗━━━┻━━━┛
            */
        }
    }
};