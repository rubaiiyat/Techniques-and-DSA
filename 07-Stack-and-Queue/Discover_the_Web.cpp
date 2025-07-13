#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    int cnt=1;
    while (t--)
    {   
        cout<<"Case "<<cnt<<":"<<endl;

        string s;
        cin>>s;

        queue <string> q;
        if (s=="VISIT")
        {   
            string s2;
            cin>>s2;
            q.push(s2);
        }else if(s=="BACK"){
            if (!q.empty())
            {
                cout<<q.front()<<endl;
            }else{
                cout<<"Ignored"<<endl;
            }
            
            
        }else if(s=="FORWARD"){
            if(!q.empty()){
                cout<<q.back()<<endl;
            }else{
                cout<<"Ignored"<<endl;
            }
        }else if(s=="QUIT"){
            break;
        }
        


        



        cnt++;
    }


    
    return 0;
}