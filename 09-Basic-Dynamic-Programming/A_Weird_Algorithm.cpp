#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

void solve(ll n){
    cout<<n<<" ";
    if(n==1) return;

    if(n%2==0){
       solve(n/2);
    }else{
       solve((n*3)+1);
    }

    

}

int main()
{
    optimize();
    ll n;
    cin>>n;

    solve(n);
    
    return 0;
}