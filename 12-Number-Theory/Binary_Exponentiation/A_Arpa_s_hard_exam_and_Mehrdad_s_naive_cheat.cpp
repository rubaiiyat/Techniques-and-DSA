#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int func(ll base,int power,int mod){
    ll ans=1;

    while (power)
    {
        if (power%2!=0)
        {
            ans=(base*ans)%mod;
            power-=1;
        }else{
            base=(base*base)%mod;
            power/=2;
        }
        
    }
    
    return ans%10;
}

int main()
{
    optimize();


    ll base=1378;
    int power; cin>>power;
    int mod=1e9;

    cout<<func(base,power,mod);
    


    
    return 0;
}