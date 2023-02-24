/*
*/
#include<bits/stdc++.h>
using namespace std;

// bool checkStraightLine(vector<vector<int>>& coordinates) {
//         if(coordinates.size()==2)return true;
//         if(coordinates.size()<=1)return false;
        
//         double slope = (coordinates[1][0]-coordinates[0][0])/(coordinates[1][1]-coordinates[0][1]);
//         cout<<slope<<" ";
//         for(int i=2;i<coordinates.size();i++)
//         {
//             double s=(coordinates[i][0]-coordinates[i-1][0])/(coordinates[i][1]-coordinates[i-1][1]);
//             cout<<s<<" ";
//             if(s!=slope)return false;
//         }
//         return true;
// }

//    <<<------RIGHT APPROACH --------------->>>>
//  bool checkStraightLine(vector<vector<int>>& coor) {
//         int x = coor[1][0]-coor[0][0],
//             y = coor[1][1]-coor[0][1];

//         for(int i = 2; i < coor.size(); i++){
//             if((coor[i][0]-coor[0][0]) * y !=  (coor[i][1]-coor[0][1]) * x)
//                 return false;
//         }
//         return true;
//     }

    void powerOf2 ( int n)
    {
        int no=1;
        while(no<=n)
        {
            no=no<<1;
            cout<<no<<endl;
        }
    }

 int main()
 {
    // vector<vector<int>> v={{1,-8},{2,-3},{1,2}};
    // cout<<checkStraightLine(v);
    powerOf2(20);
    return 0;
 }       

