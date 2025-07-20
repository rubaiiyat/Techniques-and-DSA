#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

void findPermutation(string s){
    
    cout<<s<<endl;
    if(next_permutation(s.begin(),s.end())){
        findPermutation(s);
    }
    
}

int main()
{
    optimize();


    string s;
    cin>>s;

    sort(s.begin(),s.end());
    findPermutation(s);
    


    
    return 0;
}