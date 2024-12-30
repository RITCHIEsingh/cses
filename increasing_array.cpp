#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0  ; i<n ; i++){
        long long x;
        cin>>x;
        arr.push_back(x);
    }
    long long ans = 0;
    for(int i = 1 ; i<n ; i++){
        if(arr[i]<arr[i-1]){
            long long d = arr[i-1]-arr[i];
            arr[i] += d;
            ans = ans+d;
        }
    }
    cout<<ans;
 return 0;
}