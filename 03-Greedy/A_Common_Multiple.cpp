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
        set <int> st;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            st.insert(x);
        }

        cout<<st.size()<<endl;
        
    }
    


    
    return 0;
}