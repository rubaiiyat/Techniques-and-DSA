#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    while (t--)
    {
        string a,b;
        cin>>a>>b;

        char temp=a[0];
        a[0]=b[0];
        b[0]=temp;

        cout<<a<<" "<<b<<endl;
    }
    


    
    return 0;
}