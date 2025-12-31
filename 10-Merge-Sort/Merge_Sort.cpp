#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

void merge(int arr[], int l,int m, int r){
    int left=(m-l)+1;
    int right=r-m;

    int L[left],R[right];

    int k=0;
    for (int i = l; i <=m ; i++)
    {
        L[k]=arr[i];
        k++;
    }
    k=0;
    for (int i = m+1; i <=r ; i++)
    {
        R[k]=arr[i];
        k++;
    }

    int cur=l;
    int i=0,j=0;

    while (i<left && j<right)
    {
        if(L[i]<=R[j]){
            arr[cur]=L[i];
            i++;
        }else{
            arr[cur]=R[j];
            j++;
        }
        cur++;
    }
    
    while (i<left)
    {
        arr[cur]=L[i];
        i++;
        cur++;
    }
    while (j<right)
    {
        arr[cur]=R[j];
        j++;
        cur++;
    }
    
    
}

void divide(int arr[],int l,int r){
    /* for (int i = l; i <= r; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; */

    if(l<r){
        int mid=(l+r)/2;
        divide(arr,l,mid);
        divide(arr,mid+1,r);
        merge(arr, l,mid,r);
    }
    
}

int main()
{
    optimize();

    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    divide(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    
    return 0;
}