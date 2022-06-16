/*
Given a string S delete the characters which are appearing more than once consecutively.

Example 1:

Input:
S = aabb
Output:  ab 
Explanation: 'a' at 2nd position is
appearing 2nd time consecutively.
Similiar explanation for b at
4th position.
*/
#include <iostream>
#include <string>
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string ans ="";
        ans+=S[0];
        for( int i=1;i<S.size();i++)
        {
            if(S[i-1]!=S[i])
              ans+=S[i];
            
        }
        return ans;
    }
};
int main()
{
    string s ="aabb";
    Solution obj;
    cout<<obj.removeConsecutiveCharacter(s)<<endl;
}