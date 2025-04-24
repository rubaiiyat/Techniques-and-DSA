#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int goOut=1;

        if (a==0 && b==0 && c==0)
        {
            goOut=0;
        }else if(a==1 && b==1 && c==1){
            goOut=0;
        }

        cout<<goOut<<endl;
        

        
    }
    



    return 0;
}