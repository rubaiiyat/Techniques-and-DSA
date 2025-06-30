#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    map <string,int> mp;
    
    while (t--)
    {
        int n;
        string name;
        cin>>n>>name;
        if (n==1)
        {
            int marks;
            cin>>marks;
            mp[name]+=marks;
        }else if(n==2){
            mp.erase(name);
        }else if(n==3){
            cout<<mp[name]<<endl;
        }
        

        
        
    }

    
    return 0;
}