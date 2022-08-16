/*
Given a string s, find the first non-repeating character in it and return its index. 
If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0
*/

#include<bits/stdc++.h>
using namespace std;

// <<--------MY SOLUTION-------->> using map  T.C -->  O(2n)
int firstUniqChar(string s) {
        map<char,int>m;
        for(char i:s)
        {
            m[i]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
        
    }

    //  ANOTHER APPROACH  T.C -> O(n)

    	int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> m;
        int idx = s.size();
        for (int i = 0; i < s.size(); i++) {
            m[s[i]].first++;
            m[s[i]].second = i;
        }
        for (const auto& [c, p] : m) {
            if (p.first == 1) {
                idx = min(idx, p.second);
            }
        }
        return idx == s.size() ? -1 : idx;
    }


    //  USING VECTOR 

     int firstUniqChar(string s) {
        vector<int> v(26,0);
		for(char c : s) v[c - 'a']++;
		for(int i = 0; i < s.length(); i++){
			if(v[s[i] - 'a'] == 1) return i;
		}
		return -1;
    }