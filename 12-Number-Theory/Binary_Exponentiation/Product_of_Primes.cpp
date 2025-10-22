#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int N=9000000;
bool prime[90000001];
int mod=1e9+7;
vector <int> v;
void sieve(int l,int r){
    for(int i=2;i*i<=N;i++){
        
        if(prime[i]==false){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=true;
            }
        }
    }
    
    for(int i=l;i<r;i++){
        if(prime[i]==false){
            v.push_back(i);
        }
    }
    
}


int main()
{
    optimize();

    int l,r;cin>>l>>r;
    sieve(l,r);
    long long ans=1;
    for(auto it:v){
        ans=(it*ans)%mod;
        // cout<<it<<" ";
    }
    cout<<ans<<endl;
    return 0;
}