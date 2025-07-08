#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    set<pair<string,string>> st;
    for (int i = 0; i < t; i++)
    {
        string s,color;
        cin>>s>>color;

        st.insert({s,color});
    }


    cout<<st.size()<<endl;
    


    
    return 0;
}