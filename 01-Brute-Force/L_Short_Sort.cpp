#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;

    while (t--)
    {
        char a,b,c;
        cin>>a>>b>>c;

        bool got=false;
        if (a=='a' && b=='b' && c=='c')
        {
            got=true;
        }

        char temp=a;
        a=b;
        b=temp;

        if (a=='a' && b=='b' && c=='c')
        {
            got=true;
        }

        char temp2=b;
        b=a;
        a=temp2;


        char temp3=b;
        b=c;
        c=temp3;


        if (a=='a' && b=='b' && c=='c')
        {
            got=true;
        }
        
        
        char temp4=c;
        c=b;
        b=temp4;


        char temp5=a;
        a=c;
        c=temp5;


        if (a=='a' && b=='b' && c=='c')
        {
            got=true;
        }
        


        if (got==true)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        

    }
    



    return 0;
}