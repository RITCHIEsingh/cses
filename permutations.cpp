#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n == 1) cout<<1;
    if(n>=1 && n<=3){
        cout<<0;
    }
    for(int i = 0 ; i<n ; i +=2){
        cout<<i<<" ";
    }
    for(int i = 1 ; i<n ; i+=2){
        cout<<i<<" ";
    }
 return 0;
}