#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

bool sortString(string word1, string word2){
    if(word1.size()==word2.size()){
        return word1<word2;
    }else{
        return word1.size()<word2.size();
    }
}

int main()
{
    optimize();


    int n; cin>>n;
    vector <string> v(n);
    for(auto &x:v) cin>>x;
    
    /* for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(v[i].size()>v[j].size()){
                swap(v[i],v[j]);
            }
        }
        
    } */
    sort(v.begin(),v.end(),sortString);

    for(auto it:v) cout<<it<<endl;


    
    return 0;
}