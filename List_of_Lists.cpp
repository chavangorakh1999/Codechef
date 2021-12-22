#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    int mx=1;
    int c=1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            c++;
            mx=max(mx,c);
        }else{
            c=1;
        }
    }
    if(n==mx){
        cout<<0<<"\n";
    }else if(mx==1){
        cout<< -1<<"\n";
    }else{
        cout<<(n-mx)+1<<"\n";
    }
    
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        solve(arr,n);
    }
    return 0;
}