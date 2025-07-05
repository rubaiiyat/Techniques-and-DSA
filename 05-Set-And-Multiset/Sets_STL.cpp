#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int n;
    cin>>n;

    set <int> st;
    while (n--)
    {
        int x,y;
        cin>>x>>y;

        if (x==1)
        {
            st.insert(y);
        }else if(x==2){
            st.erase(y);
        }else if(x==3){
            auto it=st.find(y);
            if(it!=st.end()) cout<<"Yes"<<endl;else cout<<"No"<<endl;
            
        }
        
    }
    


    
    return 0;
}