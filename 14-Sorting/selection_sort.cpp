#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int n;cin>>n;
    vector <int> v(n);
    for(auto &x:v) cin>>x;

    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;

        for (int j = i+1; j < n; j++)
        {
            if(v[minIndex]>v[j]){
                minIndex=j;
            }
        }
        
        swap(v[i],v[minIndex]);

    }
    
    for(auto it:v) cout<<it<<" ";
    cout<<endl;


    
    return 0;
}