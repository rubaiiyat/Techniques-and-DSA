#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fibo(n-2)+fibo(n-1);

}

void currentFibo(int n, int current=0){
    if(current>n){
        return;
    }

    cout<<fibo(current)<<endl;
    currentFibo(n,current+1);
}

int main()
{
    optimize();


    int n;
    cin>>n;

    currentFibo(n);


    
    return 0;
}