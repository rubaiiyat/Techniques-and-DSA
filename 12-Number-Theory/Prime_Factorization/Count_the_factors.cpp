#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    
    while (true)
    {   
        int n;cin>>n;
        if(n==0) break;

        int val=n;
        set <int> st;
        for (int i = 2; i*i <= n; i++)
        {
            if(n%i==0){
                while (n%i==0)
                {
                    n/=i;
                }
                st.insert(i);
            }
        }
        
        cout<<val<<" : "<<st.size()+1<<endl;
        

    }
    


    
    return 0;
}