#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int n;
    cin>>n;

    map <string, bool> mp;
    while (n--)
    {
        string s;
        cin>>s;

        if(mp[s]==1) cout<<"YES"<<endl; else cout<<"NO"<<endl;

        mp[s]=1;
        
    }
    


    
    return 0;
}