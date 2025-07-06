#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();

    int t;
    cin>>t;
    int x=t;
    set <long long> st;

    while (t--)
    {
        int n;
        cin>>n;

        st.insert(n);
    }

    int t2;
    cin>>t2;
    int x2=t2;
    vector <long long> st2;

    while (t2--)
    {
        int n;
        cin>>n;

        st2.push_back(n);
    }

    
    for(auto it:st2){
        if(st.find(it) !=st.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    

    
    return 0;
}