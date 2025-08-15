#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);

        for (auto &x:v) cin>>x;
        
        int sum=0;
        
        for(auto it:v){
            if(it==0) sum+=1;
            sum+=it;
        }
        cout<<sum<<endl; 
      

        
    }
    


    
    return 0;
}