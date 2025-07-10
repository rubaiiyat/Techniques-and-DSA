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

    bool valid=true;

    for(auto c:s){
        if (c=='(')
        {
            st.push(c);
        }else{
            if(st.empty()){
                valid=false;
                break;
            }else{
                if(c==')'){
                    st.pop();
                }

                if(valid==false) break;
            }
        }
        
    }

    if (!st.empty()) valid=false;
    
    if(valid) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

    
    return 0;
}