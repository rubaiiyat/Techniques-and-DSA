#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;
    set <int> st;

    int p1;
    cin>>p1;
    while (p1--)
    {
        int n;
        cin>>n;
        st.insert(n);
    }

    int p2;
    cin>>p2;
    while (p2--)
    {
        int n;
        cin>>n;
        st.insert(n);
    }
    
    
    

    bool found=true;

    for (int i = 1; i <= t; i++)
    {
        if(st.find(i)==st.end()){
            found=false;
            break;
        }
        
    }
    
    
    if (found) 
    {
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    

    
    return 0;
}