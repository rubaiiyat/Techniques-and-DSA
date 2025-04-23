#include <bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin>>n;

    int mx;
    for (int i = 1; i <= 10; i++)
    {
       

        if (n%i==0)
        {
           
            mx=i;
            
        }
        
        
        
    }


    
    cout<<mx<<endl;


    return 0;
}