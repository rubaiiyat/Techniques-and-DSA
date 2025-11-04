#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int n,m;cin>>n>>m;
    vector <int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    

    vector <ll> prev;
    ll sum=0;
    for(int i=0;i<=n;i++){
        
        sum+=v[i];
        prev.push_back(sum);
    }

//    for(auto it:prev) cout<<it<<" ";

    while (m--)
    {   
        int a,b;
        cin>>a>>b;
        cout<<prev[b]-prev[a-1]<<endl;
        
    }
    
    
    

    
    return 0;
}