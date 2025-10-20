#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;
const int N=1e6+5;
int prime[N];

void sieve(int n){
    for (int i = 2; i*i <= n; i++)
    {
        if(prime[i]==0){
            for (int j = i*i; j <= n; j+=i)
            {
                prime[j]=1;
            }
            
        }
    }
    
}
int main()
{
    optimize();


    memset(prime,0,sizeof(prime));

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        sieve(n);

        for (int i = 2; i <= n; i++)
        {
            if(prime[i]==0) cout<<i<<" ";
        
        }
        cout<<endl;
    }
    
    


    
    return 0;
}