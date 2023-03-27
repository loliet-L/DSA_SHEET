#include<bits/stdc++.h>
using namespace std;
struct contactData{
     string name;
     string birthday;
     vector<string> phoneNumbers;
     unsigned int lastUpdatedTime;
};

void merge(contactData &c1,contactData &c2)
{
   for(auto i:c2.phoneNumbers)
   {
    c1.phoneNumbers.push_back(i);
   }
}


void solve()
{
    vector<contactData>mergeContacts;
    unordered_map<string,pair<int,int>>m;
    for(int i=0;i<mergeContacts.size();i++)
    {
        bool flag=false;
        for(auto j:mergeContacts[i].phoneNumbers)
        {
            if(m.find(j)==m.end())
            {
                m[j]=pair{i,1};
            }
            else{
                
                 contactData temp= mergeContacts[m[j].first];
                 if(temp.lastUpdatedTime>mergeContacts[i].lastUpdatedTime)
                 {
                    merge(temp,mergeContacts[i]);
                    flag=true;
                 }
                 else{
                    merge(mergeContacts[i],temp);
                    mergeContacts.erase(remove(mergeContacts.begin(),mergeContacts.end(),m[j].first),mergeContacts.end());
                 }
            }
        }
        if(flag){
            mergeContacts.erase(remove(mergeContacts.begin(),mergeContacts.end(),i),mergeContacts.end());
        }

    }
}

int main()

{
int N=100;
vector<int> lp(N+1);
vector<int> pr;

for (int i=2; i <= N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back(i);
    }
    for (int j = 0; i * pr[j] <= N; ++j) {
        lp[i * pr[j]] = pr[j];
        if (pr[j] == lp[i]) {
            break;
        }
    }
}
for(auto i:pr)cout<<i<<' ';




    

    return 0;
}