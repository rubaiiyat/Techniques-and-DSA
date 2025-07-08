#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
using namespace std;

int main()
{
    optimize();


    int a,b;
    cin>>a>>b;

    long long sum=a+b+(a*b);

    cout<<(sum==111 ? "Yes":"No")<<endl;


    
    return 0;
}