#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,x;
    cin>>n;
    vector <int> v(n);
    map <int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }

    int found=0;
    for(auto it:mp){
        if (it.first==x)
        {
            found=it.second;
        }
        
    }
    
    
    cout<<found;
    
    
    return 0;
}