#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector <string> v;
    vector <int> count;
    for (int i = 0; i < n; i++)
    {   
        string s;
        cin>>s;
        
        bool fnd=false;
        for (int j = 0; j < v.size(); j++)
        {
                    
            if (s==v[j])
            {   
                cout<<s<<count[j]<<endl;
                count[j]++;
                fnd=true;
                break;
            }
            
        }
        
        
        

        if (!fnd)
        {
            cout<<"OK"<<endl;
            v.push_back(s);
            count.push_back(1);
        }
        
        
    }
    
    return 0;
}