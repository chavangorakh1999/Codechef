#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=x;i++){  
        int temp=arr[i];
        arr[i]=arr[i+y];
        arr[i+y]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}