#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int n;
    cin>>n;

    map <int,int> mp;
    while (n--)
    {
        int x;
        cin>>x;

        mp[x]++;
    }

    int mx=0;

    for(auto mp:mp) if(mp.second>mx) mx=mp.second;

    cout<<mx<<endl;
    


    
    return 0;
}