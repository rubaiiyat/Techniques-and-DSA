#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int fibo(int n){
    if(n==0 || n==1 ) return n;

    return fibo(n-2)+fibo(n-1);
}

int main()
{
    optimize();


    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        cout<<fibo(n)<<endl;
    }
    


    
    return 0;
}