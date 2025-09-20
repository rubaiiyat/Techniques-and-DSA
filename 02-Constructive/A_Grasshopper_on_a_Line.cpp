#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int t; cin>>t;
    while (t--)
    {
        ll n,k; cin>>n>>k;
        if(n%k!=0){
            cout<<1<<endl;
            cout<<n<<endl;
        }else{
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
        }
    }
    


    
    return 0;
}