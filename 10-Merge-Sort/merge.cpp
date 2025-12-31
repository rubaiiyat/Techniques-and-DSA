#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

void merge(int arr[], int l, int m, int r){
    int left=(m-l)+1,right=r-m;

    int L[left],R[right];

    int k=0;
    for (int i = l; i <= m; i++)
    {
        L[k]=arr[i];
        k++;
    }
    k=0;
    for (int i = m+1; i <= r; i++)
    {
        R[k]=arr[i];
        k++;
    }
    k=0;
    int i=0,j=0;
    int cur=l;
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

int main()
{
    optimize();

    int n=10;
    int arr[n]={1,3,5,6,2,4,7,8,9,10};

    merge(arr,0,3,n-1);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}