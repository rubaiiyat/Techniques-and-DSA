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

    for(char c:s){
        if(!st.empty() && st.top()==c){
            st.pop();
        }else {
            st.push(c);
        }
    }

    string result="";

    while (!st.empty())
    {
        result+=st.top();
        st.pop();
    }
    
    reverse(result.begin(),result.end());
    cout<<result<<endl;
    
    return 0;
}