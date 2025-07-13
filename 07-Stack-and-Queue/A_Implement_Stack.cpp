#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    stack <int> st;

    while (t--)
    {
        string s;
        cin>>s;

        if(s=="push"){
            int value;
            cin>>value;
            st.push(value);
            
        }else if(s=="pop"){
            if (!st.empty())
            {   
                cout<<st.top()<<endl;
                st.pop();
                
            }else{
                cout<<"Empty"<<endl;
            }
            
            
        }
        
    }
    


    
    return 0;
}