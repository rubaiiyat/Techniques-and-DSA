#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    set <int> st;

    int n;
    cin>>n;

    while (n--)
    {
        int x;
        cin>>x;

        st.insert(x);
    }

    int fnd=st.erase(2);

    for(auto it:st) cout<<it<<endl;
    


    
    return 0;
}