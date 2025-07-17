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

    bool valid =true;

    for(char c:s){
        if(c=='(' || c=='{' || c=='['){
            st.push(c);
        }else{
            if(st.empty()){
                valid=false;
                break;
            }else{
                if(c==')' && st.top()=='('){
                    st.pop();
                }else if(c=='}' && st.top()=='{'){
                    st.pop();
                }else if(c==']' && st.top()=='['){
                    st.pop();
                }else{
                    valid=false;
                    break;
                }

                
            }
            
            
        }

        
    }
    
    if(!st.empty()) valid==false;

    if(valid) cout<<"true"<<endl;else cout<<"false"<<endl;

    
    return 0;
}