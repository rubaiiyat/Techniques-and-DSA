#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin>>t;

    int index=0;
    while(t--){
        int p,v,s;
        cin>>p>>v>>s;

        int cnt=0;

        if(p==1)cnt++;
        if(v==1)cnt++;
        if(s==1)cnt++;

        

        if(cnt>=2)index++;
        cnt=0;

        
        
        
        
    }
    cout<<index<<endl;

    return 0;
}