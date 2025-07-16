#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();


    string s;
    cin>>s;

    stack <char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if(!st.empty() && st.top()==s[i]){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    
    string ss="";

    while(!st.empty()){
        ss+=st.top();
        st.pop();
    }


    reverse(ss.begin(),ss.end());

    cout<<ss<<endl;
    
    return 0;
}