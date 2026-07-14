#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();

    int n;cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int cur=v[0];
    int mx=v[0];

    for (int i = 1; i < n; i++)
    {
        cur=max(v[i],cur+v[i]);
        mx=max(mx,cur);
        
    }
    
    cout<<mx<<endl;
    
    
    


    
    return 0;
}