#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    

    while (cin>>n)
    {
        if (n==0)
        {
            break;
        }
        
        vector <string> v;

        while (n--)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }

        
        
        map <string,int> mp;

        for (int i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
        }
        
        
        int mx=0;
        for(auto it:mp){
            if(it.second>mx) mx=it.second;
        }

        for(auto it:mp) {
            if(mx==it.second) cout<<it.first<<endl;
            
        }
    }
    

    

    return 0;
}