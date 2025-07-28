#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

bool solve(vector <int> &v,int m,int n){
    if(m>=n) return true;

    if(v[m]!=v[n]){
        return false;
    }
    return solve(v,m+1,n-1);

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
    

    if(solve(v,0,n-1)) cout<<"YES"<<endl;else cout<<"NO"<<endl;

    
    return 0;
}