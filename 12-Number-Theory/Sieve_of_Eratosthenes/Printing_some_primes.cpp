#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;
bool prime[90000001];
int n=90000000;

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

    
    
}
int main()
{
    optimize();
    sieve();
    int cnt=0;
    for (int i = 2; i <= n; i++)
    {
        if(prime[i]==false){
            cnt++;
            if(cnt%100==1) cout<<i<<endl;
        }
    }
    


    
    return 0;
}