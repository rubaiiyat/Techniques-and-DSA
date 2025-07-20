#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int reverseExponentiation(int n){
    if(n==10){
        return 10;
    }else{
        return pow(n,n);
    }
}

int main()
{
    optimize();


    int n;
    cin>>n;
    reverseExponentiation(n);

    
    return 0;
}