#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int dp[1000000];
int h[1000000];

int solve(int i,int n){
    if( i==n-1) return 0;

    if(dp[i]!=-1) return dp[i];

    int res1=abs(h[i]-h[i+1])+solve(i+1,n);
    int res2=INT_MAX;

    if(i+2<n){
        res2=abs(h[i]-h[i+2])+solve(i+2,n);
    }

    
   
    return dp[i]=min(res1,res2);
    
}

int main()
{
    optimize();
    memset(dp,-1,sizeof(dp));
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++) cin>>h[i];

    int result=solve(0,n);
    cout<<result<<endl;


    
    return 0;
}