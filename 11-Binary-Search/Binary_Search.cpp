#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int n,k; cin>>n>>k;
    vector <int> v(n);
    for(auto &x:v) cin>>x;

    int l=0,r=n-1;

    bool found=false;
    
    while (l<=r)
    {   
        int mid=(l+r)/2;
        if(k==v[mid]){
            found=true;
            break;
        }
        else if(k<v[mid]){
            r=mid-1;
           
        }
        else if(k>v[mid]){
            l=mid+1;
        }
    }
    
    if(found) cout<<"YES"<<endl; else cout<<"NO"<<endl;
    


    
    return 0;
}