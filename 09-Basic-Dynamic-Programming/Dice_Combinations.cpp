#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

const int mod=1e9+7;
int dp[1000000+5];


int solve(int n){
    if(n==0) return 1;
    if(n<0) return 0;

    if(dp[n]!=-1) return dp[n];

    int cnt=0;

    for (int i = 1; i <= 6; i++)
    {
        cnt=(cnt+solve(n-i))%mod;
    }
   
    return dp[n]=cnt;

}

int main()
{
    optimize();


    ll n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    

    cout<<solve(n)<<endl;


    
    return 0;
}