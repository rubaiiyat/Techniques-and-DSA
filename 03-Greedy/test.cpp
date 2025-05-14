#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int count[256]={0};

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }

    
    for (int i = 0; i < 256; i++)
    {
        if (count[i]>0)
        {
            cout<<(char)i<<" : "<<count[i]<<endl;
        }
        
    }
    
    

    
    
}
