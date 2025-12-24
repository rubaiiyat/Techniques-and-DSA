#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int arr[10]={10,20,30,30,30,30,40,50,60,70};
    int n=10;
    int x=30;

    int lower_bound;
    int low=0, high=n-1;

    while (low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]<x){
            low=mid+1;
        }else if(arr[mid]<=x){
            lower_bound=mid;
            high=mid-1;
        }else if(arr[mid]>x){
            high=mid-1;
        }
    }
    
    
    cout<<lower_bound<<endl;

    
    return 0;
}