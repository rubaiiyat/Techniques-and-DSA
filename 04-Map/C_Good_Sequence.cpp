#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int n;
    cin>>n;
    map <int,int> mp;
    int i=0;
    while (n--)
    {
        int x;
        cin>>x;

        mp[x]++;
        
    }

    int cnt=0;
    for(auto it:mp){
        if (it.first<it.second)
        {
            cnt+=it.second-it.first;
            
        }else if(it.first>it.second){
            cnt+=it.second;
        }
        
    }

    cout<<cnt<<endl;

    
    return 0;
}