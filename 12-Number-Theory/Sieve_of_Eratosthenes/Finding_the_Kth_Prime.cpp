#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;
bool prime[90000001];
int n=90000000;
vector <int> v;
void sieve(){
    for (int i = 2; i*i <= n; i++)
    {
        if(prime[i]==false){
            for (int j = i*i; j <= n; j+=i)
            {
                prime[j]=true;
            }
            
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if(prime[i]==false) v.push_back(i);
    }
    
    
}
int main()
{
    optimize();

    memset(prime,0,sizeof(prime));
    sieve();

    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        cout<<v[n-1]<<endl;
    }
    


    
    return 0;
}