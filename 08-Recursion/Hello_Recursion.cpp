#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int sum(vector <int> &v,int i=0){
    
    if(i==v.size()) return 1;
    return v[i]+sum(v,i+1);
}

int main()
{
    optimize();


    int t;
    cin>>t;

    int y=1;
    while (t--)
    {
        vector <int> v;
        int n;
        cin>>n;
        
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;

            v.push_back(x);
            
        }
        
        
        cout<<"Case "<<y<<": "<<sum(v)-1<<endl;
        y++;

        
    }
    


    
    return 0;
}