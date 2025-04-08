#include <bits/stdc++.h>
using namespace std;

int main () {

    char s[8][8];
    

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin>>s[i][j];
        }
        
    }

    int row,col;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (s[i][j]=='*')
            {
                row=8-i;
                col=j;
                
            }
            
        }
        
        
    }

    char val='a'+col;

    cout<<val<<row<<endl;
    



    return 0;
}