#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
using namespace std;

bool compare(pair<pair<string,string>,int> &a, pair<pair<string,string>,int> &b){

    if(a.first == b.first) return (a.second>b.second);

    if(a.first.second==b.first.second) return (a.first.first<b.first.first);
    
    return (a.first.second<b.first.second);
}

int main()
{
    optimize();


    int n;
    cin>>n;

    vector <pair<pair<string,string> ,int>> vp;

    for (int i = 0; i < n; i++)
    {
        string first_name, last_name;
        cin>>first_name>>last_name;
        int year;
        cin>>year;

        vp.push_back({{first_name,last_name},year});
    }

    sort(vp.begin(),vp.end(),compare);

    for(auto v:vp){
        cout<<v.first.first<<" "<<v.first.second<<" "<<v.second<<endl;
    }
    


    
    return 0;
}