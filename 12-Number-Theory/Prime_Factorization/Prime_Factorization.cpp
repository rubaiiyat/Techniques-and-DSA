#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

void primeFact(int n){
    for (int i = 2; i*i <= n; i++)
    {
        if(n%2==0){
            int cnt=0;
            while (n%i==0)
            {
                cnt++;
                n/=i;
            }
            cout<<i<<"^"<<cnt<<",";
        }
    }

    if(n>1){
        cout<<n<<"^"<<1<<endl;
    }
    
}

int main()
{
    optimize();


    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        primeFact(n);
    }
    


    
    return 0;
}