#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int func(ll base, ll power,ll mod){
    
    ll ans=1;

    // power not equal to zero
    while (power)
    {
        if(power%2!=0){
            power-=1;
            ans=(base*ans)%mod;
        }else{
            power/=2;
            base=(base*base)%mod;
        }
    }
    
    return ans;
}

int main()
{
    optimize();


    int t; cin>>t;
    while (t--)
    {
        ll base,power;
        cin>>base>>power;
        ll mod=1e9;
        cout<<func(base,power,mod)<<endl;
        
    }
    


    
    return 0;
}