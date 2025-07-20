#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int fact(int n){
    if(n==0) return 1;
    int result=n*(fact(n-1));
    return result;
}

int main()
{
    optimize();


    int n;
    cin>>n;

    cout<<fact(n)<<endl;


    
    return 0;
}