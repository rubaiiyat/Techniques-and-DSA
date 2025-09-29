#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int n,m;cin>>n>>m;
    vector<vector <int>> v(n,vector <int> (m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>v[i][j];
        }
        
    }
    int target=3;
    
     
    int value=-1;
    for (int i = 0; i < n; i++)
    {   int l=0;
        int r=m-1; 
        
        while (l<=r)
        {
            int mid=(l+r)/2;

            if(v[i][mid]==target){
                value=v[i][mid];
                break;
            }else if(v[i][mid]>target){
                r=mid-1;
            }else if(v[i][mid]<target){
                l=mid+1;
            }
        }
        
        
        
    }
    
    cout<<value<<endl;
    


    
    return 0;
}