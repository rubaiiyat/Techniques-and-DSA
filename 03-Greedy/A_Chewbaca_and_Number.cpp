#include <bits/stdc++.h>
using namespace std;

int main () {

    string s;
    cin>>s;

    int temp=s[0];

    for (int i = 0; i < s.length(); i++)
    {
        int t=s[i]-'0';
        int revDigit=9-t;

        if (revDigit<t)
        {
            s[i]=revDigit+'0';
        }
        
    }

    if(s[0]=='0'){
        s[0]=temp;
    }

    cout<<s<<endl;
    



    return 0;
}