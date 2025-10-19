#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;

        if(n<2){
            cout<<"no"<<endl;
        }
        else if(n==2){
            cout<<"yes"<<endl;
        }else if(n%2==0){
            cout<<"no"<<endl;
        }else if(n==3){
            cout<<"yes"<<endl;
        }else{
            bool isPrime=true;
            for (int i = 2; i <=sqrt(n); i++)
            {
                if(n%i==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime) cout<<"yes"<<endl; else cout<<"no"<<endl;
        }
        
        

        
    }
    


    
    return 0;
}