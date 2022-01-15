#include <bits/stdc++.h>
using namespace std;

void solve(int coins[],int n,int coin){
    sort(coins,coins+n,greater<int>());
    int sum=0,count=0,i;
    for(i=0;i<n;i++){
        sum+=coins[i];
        count++;
        if(sum>=coin){
            cout<<count<<endl;
            break;
        }
    }
    if(i==n){
        cout<< -1<<endl;
    }
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,coin;
        cin>>n>>coin;
        int coins[n];
        for(int i=0;i<n;i++){
            cin>>coins[i];
        }
        solve(coins,n,coin);
    }
    return 0;
}