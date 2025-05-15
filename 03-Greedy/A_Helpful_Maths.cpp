#include <bits/stdc++.h>
using namespace std;

int main () {

    string s;
    cin>>s;

    string s2;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!='+')
        {
            s2+=s[i];
        }
        
        
    }

    sort(s2.begin(),s2.end());

    cout<<s2[0];
    for (int i = 1; i < s2.length(); i++)
    {
        
        cout<<'+'<<s2[i];
    }
    cout<<endl;


    return 0;
}