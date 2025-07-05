#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    set <int> st;

    int p;
    cin>>p;

    while (p--)
    {
        int n;
        cin>>n;
        st.insert(n);

    }

    int q;
    cin>>q;

    while (q--)
    {
        int n;
        cin>>n;
        st.insert(n);

    }

    if(st.size()==t) cout<<"I become the guy."<<endl;else cout<<"Oh, my keyboard!"<<endl;
    


    
    return 0;
}