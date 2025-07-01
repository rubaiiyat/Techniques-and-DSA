#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    vector <string> v;
    for (int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        v.push_back(s.substr(3,3));
        
    }

    int cnt=0;
    while (m--)
    {   
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s==v[i])
            {
                cnt++;
                break;
            }
            
        }
        
    }
    
    cout<<cnt<<endl;
    
    return 0;
}