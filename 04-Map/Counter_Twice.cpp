#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int n;
    cin>>n;

    map <string, int> mp;
    while (n--)
    {
        string s;
        cin>>s;

        mp[s]++;
    }

    int cnt=0;

    for(auto it: mp) if(it.second==2) cnt++;

    cout<<cnt<<endl;
    


    
    return 0;
}