#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector <string> v;

    while (n--)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }

    int l=v.size();
    reverse(v.begin(),v.end());

    vector <string> ans;
    for (int i = 0; i < l; i++)
    {   
        bool fnd=false;
        for (int j = i+1; j < l; j++)
        {
            if (v[i]==v[j])
            {
                fnd=true;
                break;
            }
            
        }

        if(fnd){
            ans.push_back("YES");
        }else{
            ans.push_back("NO");
        }
        
    }

    reverse(ans.begin(),ans.end());

    for (auto it:ans) cout<<it<<endl;


   
    
    
    return 0;
}