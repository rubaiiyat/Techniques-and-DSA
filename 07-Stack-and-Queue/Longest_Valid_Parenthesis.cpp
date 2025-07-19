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

    int cnt=0;
    for(char c:s){
        if(c=='('){
            st.push(c);
        }else{

            else(c==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    cnt+=2;

                    
                }
                
            }
        }
    }

    cout<<cnt<<endl;
    
    return 0;
}