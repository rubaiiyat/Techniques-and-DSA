#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();

    string s;
    getline(cin,s);

    stringstream ss(s);

    string word;

    unordered_map <string, int> mp;
    int i=0;
    while(ss>>word){
        mp[word]++;
        i++;
    }

    vector <string> x;
    int mx=0;
    for(auto it:mp) mx=max(mx,it.second);

    for(auto it: mp){
        if (mx==1)
        {
            x.push_back(it.first);
            x.push_back("1");
        }else{
            if(it.second==mx){
            x.push_back(it.first);
            x.push_back(to_string(it.second));
        }
        }
        
    }
    string xx;
    int l=x.size();
    if (mx==1)
    {
        xx+=x[l-2];
        xx+=" ";
        xx+=x[l-1];
    }else{
        xx+=x[0];
        xx+=" ";
        xx+=x[1];
    }
    
    
    cout<<xx<<endl;
    
    return 0;
}