/*
Given a sentence in the form of a string in uppercase,
 convert it into its equivalent mobile numeric keypad sequence.

 Example 1:

Input:
S = "GFG"
Output: 43334
Explanation: For 'G' press '4' one time.
For 'F' press '3' three times.
*/
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
string printSequence(string S) 
   { 
       string ans;
       string str[]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
       for ( int i=0;i<S.length();i++)
       {
           if(S[i] == ' ')
           {
               ans+="0";
           }
           else{
           ans+=str[S[i]-'A'];
           }
       }
       return ans;
   
}
string printSequence1(string S)
{
    unordered_map <char,string> mapping;
    mapping['A']="2";
    mapping['B']="22";
    mapping['C']="222";
    mapping['D']="3";
    mapping['E']="33";
    mapping['F']="333";
    mapping['G']="4";
    mapping['H']="44";
    mapping['I']="444";
    mapping['J']="5";
    mapping['K']="55";
    mapping['L']="555";
    mapping['M']="6";
    mapping['N']="66";
    mapping['O']="666";
    mapping['P']="7";
    mapping['Q']="77";
    mapping['R']="777";
    mapping['S']="7777";
    mapping['T']="8";
    mapping['U']="88";
    mapping['V']="888";
    mapping['W']="9";
    mapping['X']="99";
    mapping['Y']="999";
    mapping['Z']="9999";
    mapping[' ']="0";
    
    string ans;
    
    for(int i=0;i<S.length();i++)
    {
        ans=ans+mapping[S[i]];
    }
    return ans;
}

