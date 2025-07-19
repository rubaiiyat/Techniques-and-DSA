#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();


    int k,n,w;
    cin>>k>>n>>w;
    long long sum=0;

    for (int i = 1; i <= w; i++)
    {
        sum+=k*i;

        
    }

    if(n>=sum) cout<<0<<endl;else cout<<sum-n<<endl;

    
    return 0;
}