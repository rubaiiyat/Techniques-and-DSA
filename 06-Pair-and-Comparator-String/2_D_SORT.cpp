#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.first!=b.first) return a.first<b.first;
    return a.second>b.second;
    
    
}
int main()
{
    optimize();


    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector <pair<int,int>> vp;

        for (int i = 0; i < n; i++)
        {
            int a,b;
            cin>>a>>b;

            vp.push_back({a,b});
        }
        

        sort(vp.begin(),vp.end(),cmp);


        for(auto v:vp){
            cout<<v.first<<" "<<v.second<<'\n';
        }


    }
    


    
    return 0;
}