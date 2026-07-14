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

    int cur=0;
    int mx=0;

    for (int i = 0; i < n; i++)
    {
        cur+=v[i];
        mx=max(mx,cur);
        if(cur<0) cur=0;
    }
    
    cout<<mx<<endl;
    
    
    


    
    return 0;
}