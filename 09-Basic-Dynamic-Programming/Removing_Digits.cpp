#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int dp[10000000];
int solve(int n){
    if(n==0) return 0;


    if(dp[n]!=-1) return dp[n];
    int temp=n;
    int res=10000000;

    while (temp!=0)
    {
        int lastDigit=temp%10;
        if(lastDigit!=0){
            int result=1+solve(n-lastDigit);

            res=min(res,result);
        }

        temp/=10;
    }


    return dp[n]=res;
    

}

int main()
{
    optimize();


    int n;
    cin>>n;
    
    memset(dp,-1,sizeof(dp));
    int result=solve(n);
    cout<<result<<endl;

    
    return 0;
}