#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int n,k;cin>>n>>k;
    vector <int> v(n);
    for(auto &x:v) cin>>x;

    int l=0,r=n-1;
    int value=0;
    while (l<=r)
    {   
        value=r;
        int mid=(l+r)/2;

        if(v[mid]>k){
            value=l;
        }else if(v[mid]<k){
            value=l+1;
        }
        if(k==v[mid]){
            value=mid;
            break;
        }
        else if(k>v[mid]){
            l=mid+1;
        }else if(k<v[mid]){
            r=mid-1;
        }
    }
    
    cout<<value<<endl;


    
    return 0;
}