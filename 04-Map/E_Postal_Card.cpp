#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    vector <string> v;
    while (n--)
    {
        string s;
        cin>>s;

        string s2;
        for (int i = 3; i < 6; i++)
        {
            s2+=s[i];
        }

        v.push_back(s2);
        s2="";
        
    }

    int cnt=0;
    while (m--)
    {   
        string s;
        cin>>s;
        for (int i = 0; i < v.size(); i++)
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