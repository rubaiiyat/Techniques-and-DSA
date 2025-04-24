#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int num1,num2,num3;
        for (int i = 1; i <= 26; i++)
        {
            for (int j = 1; j <= 26; j++)
            {
                for (int k = 1; k <= 26; k++)
                {
                    if (i+j+k==n)
                    {
                        num1=i;
                        num2=j;
                        num3=k;
                        break;
                    }
                    
                }
                
            }
            
        }

        char a=96+num1;
        char b=96+num2;
        char c=96+num3;

        
        cout<<c<<b<<a<<endl;
        
    }
    



    return 0;
}