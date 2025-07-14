#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();


    
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt=0;
    for (size_t i = 0; i < n; i++)
    {
        if(s[i]==s[i+1]) cnt++;
    }
    

    cout<<cnt<<endl;

    
    return 0;
}