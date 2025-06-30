#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    map <char,int> mp;

    for (size_t i = 0; i < 4; i++)
    {
        mp[s[i]]++;
    }
    vector <int> v;
    for(auto it:mp) {
        if(it.second==2){
            v.push_back(it.second);
        }
    }

    if(v.size()==2) cout<<"Yes"<<endl;else cout<<"No"<<endl;
    
    return 0;
}