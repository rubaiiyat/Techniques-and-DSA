#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

void rec(int n){
   if(n>0){
    rec(n-1);
    cout<<n<<endl;
    
   }
    
}

int main()
{
    optimize();


    int n;
    cin>>n;

    rec(n);


    
    return 0;
}