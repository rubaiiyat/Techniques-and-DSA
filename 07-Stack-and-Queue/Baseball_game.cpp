#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    optimize();

    vector <string> v;
    string s;
    while (cin>>s && s!="END")
    {
        v.push_back(s);
    }

    

    deque <int> dq;

    int l=v.size();

    for (int i = 0; i < l; i++)
    {
        if (v[i]!="C" && v[i]!="D" && v[i]!="+")
        {
            int num=stoi(v[i]);
            dq.push_back(num);
        }else if(v[i]=="C"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }else if(v[i]=="D"){
            if (!dq.empty())
            {
                int newVal=dq.back()*2;
                dq.push_back(newVal);

            }
            
        }else if(v[i]=="+"){
            int sz=dq.size();

            if(sz>=2){
                int a=dq[sz-1];
                int b=dq[sz-2];

                dq.push_back(a+b);
            }
        }
        
        
    }
 
    int sum=0;
    
    for(int val:dq){
        sum+=val;
    }

    cout<<sum<<endl; 
    


    
    return 0;
}