#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    while (t--)
    {
        vector <int> v;
        int n,k;
        cin>>n>>k;

        for (int i = 0; i < n; i++)
        {   
            int m;
            cin>>m;
            v.push_back(m);
        }

        vector <int> v2;
        for (int i = k; i < n; i++)
        {
            v2.push_back(v[i]);
        }
        

        for (int i = 0; i < k; i++)
        {
            v2.push_back(v[i]);
        }
        

        for(auto v:v2){
            cout<<v<<" ";
        }
        cout<<endl;
        
    }
    


    
    return 0;
}