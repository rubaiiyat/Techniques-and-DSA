#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

void divide(int arr[],int l, int r){

    for (int i = l; i <= r; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if (l<r)
    {
        int mid=(l+r)/2;
        divide(arr,l,mid);
        divide(arr,mid+1,r);
    }
    
    
}

int main()
{
    optimize();

    int n=10;
    int arr[n]={30,20,10,25,50,5,40,35,24,27};
    
    divide(arr, 0,n-1);


    
    return 0;
}