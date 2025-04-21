#include <bits/stdc++.h>
using namespace std;

int main () {

    string a,b;
    cin>>a;

    int len=a.length();
    for (int i = 0; i <len ; i++)
    {
        if (a[i]=='(' && a[i+1]==')')
        {
            b+=a[i];
            b+=a[i+1];
        }
        
        
    }

    cout<<b<<endl;
    



    return 0;
}