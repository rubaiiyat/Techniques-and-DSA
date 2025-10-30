#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;
vector <int> v;
int cnt=0;
void merge_sort(int l1, int r1, int l2, int r2){
    int i1=l1, i2=l2;
    vector <int> temp;
    while (i1<=r1 || i2<=r2)
    {
        if(i1>r1){
            temp.push_back(v[i2]);
            i2++;
            cnt++;
        }else if(i2>r2){
            temp.push_back(v[i1]);
            i1++;
            cnt++;
        }else if(v[i1]<=v[i2]){
            temp.push_back(v[i1]);
            cnt++;
            i1++;
        }else{
            temp.push_back(v[i2]);
            i2++;
            cnt++;
        }
    }

    for(int i=0, j=l1; i<temp.size();i++,j++){
        v[j]=temp[i];
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
    int n;cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    

    merge(0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i];
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;
    cout<<cnt<<endl;
    
    return 0;
}