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
    for(auto &x:v) cin>>x;

    for (int i = 1; i < n; i++)
    {
        int j=i;

        while (j>0 && v[j]<v[j-1])
        {
            swap(v[j],v[j-1]);
            j--;
        }
        
    }
    
    for(auto x:v) cout<<x<<" ";
    cout<<endl;


    
    return 0;
}