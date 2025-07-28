#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;


int solve(vector <int> &v,int i,int n){
    if(i<0) return 0;

    if(i%2==0){
        cout<<v[i]<<" ";

    }

    return solve(v,i-1,n); 
}

int main()
{
    optimize();


    int n;
    cin>>n;

    vector <int> v;


    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    solve(v,n-1,n);


    
    return 0;
}