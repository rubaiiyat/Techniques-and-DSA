#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;

    map <string, long long> mp;

    for (int i = 0; i < n; i++)
    {
        string name;
        long long value;
        cin>>name>>value;

        mp[name]+=value;
    }


    vector <long long> v;

    for(pair<string,long long> a:mp){
        v.push_back(a.second);
    }

    sort(v.begin(),v.end());

    int x=v.size();

    int st=x-k;
    if(st<0) st=0;


    long long ans=0;

    for (int i = st; i < x; i++)
    {
        ans+=v[i];
    }
    

    cout<<ans<<endl;
    
    return 0;
}