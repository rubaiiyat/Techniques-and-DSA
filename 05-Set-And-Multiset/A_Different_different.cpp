#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    set <int> st;
    while (t--)
    {   
        int n;
        cin>>n;
        st.insert(n);
    }


    cout<<st.size()<<endl;
    



    
    return 0;
}