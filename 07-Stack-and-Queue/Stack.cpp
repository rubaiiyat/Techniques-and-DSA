#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
using namespace std;

int main()
{
    optimize();


    int n,q;
    cin>>n>>q;

    stack <int> st[n];

    while (q--)
    {
        int type;
        cin>>type;

        if (type==0)
        {
            int t,x;
            cin>>t>>x;
            st[t].push(x);
        }else{
            int t;
            cin>>t;
            if (type==1)
            {
                if (st[t].empty()) continue;
                else cout<<st[t].top()<<endl;
                
            }else{
                if(st[t].empty()) continue;
                else st[t].pop();
            }
            
        }
        
    }
    


    
    return 0;
}