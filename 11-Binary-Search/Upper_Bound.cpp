#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int arr[10]={10,20,20,20,20,20,20,20,20,30};
    int n=10;
    int x=20;
    
    int upper_bound;

    int low=0,high=n-1;

    while (low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]<=x){
            low=mid+1;
        }else if(arr[mid]>x){
            upper_bound=mid;
            high=mid-1;
        }
    }
    

    cout<<upper_bound<<endl;
    
    return 0;
}