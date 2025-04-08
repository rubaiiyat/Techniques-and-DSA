#include <bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin>>n;

    while (n--)
    {
        char s[3][3];
        int freq[256]={0};
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>s[i][j];
                freq[s[i][j]]++;
            }
            
        }
        

        
        
        for (int i = 0; i < 256; i++)
        {
            if (freq[i]==2)
            {
                cout<<char(i)<<endl;
                break;
            }
            
        }
    }
    
    

    
    



    return 0;
}