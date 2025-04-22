#include <bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin>>n;

    int x[101],y[101];

    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
    }

    double num;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            double distance=(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
            distance=sqrt(distance);

            num=max(num,distance);
            
        }
        
    }
    
    
    cout<<fixed<<setprecision(10);
    cout<<num<<endl;



    return 0;
}