#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    vector <int> mt;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        mt.push_back(n);
    }

    int t2;
    cin>>t2;

    multiset <int> st;
    for (int i = 0; i < t2; i++)
    {   
        int n;
        cin>>n;
        st.insert(n);
    }
    
    vector <int> v;
    for(auto it:mt){
        if(st.find(it) !=st.end()){
          
        }else{
            v.push_back(it);
        }
    }
    cout<<v.size()<<endl;
    for (auto v:v){
        cout<<v<<" ";
    }
    cout<<endl;
    
    return 0;
}