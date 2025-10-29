#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

vector <int> v;
void merge_sort(int l1, int r1, int l2, int r2){
    int i1=l1, i2=l2;
    vector <int> m;
    while (i1<=r1 || i2<=r2)
    {
        if(i1>r1){
            m.push_back(v[i2]);
            i2++;
        }else if(i2>r2){
            m.push_back(v[i1]);
            i1++;
        }else if(v[i1]<=v[i2]){
            m.push_back(v[i1]);
            i1++;
        }else{
            m.push_back(v[i2]);
            i2++;
        }
    }

    for(int i=0,j=l1;i<m.size();i++,j++){
        v[j]=m[i];
    }
    
}
void merge(int l, int r){
    if(l>=r) return;
    int mid=(l+r)/2;
    merge(l,mid);
    merge(mid+1,r);

    merge_sort(l,mid,mid+1,r);
}
int main()
{
    optimize();


    int x;

    while (cin>>x)
    {
        v.push_back(x);
    }
    int n=v.size();
    merge(0,n-1);
    
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    
    return 0;
}