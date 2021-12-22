#include <bits/stdc++.h>
using namespace std;

void solve(int n,vector<int> &arr){
    int start,end,val;
    cin>>start>>end>>val;
    for(int i=start-1;i<end;i++){
        arr[i]+=val;
    }
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int> arr(n,0);
    while(t--){
        solve(n,arr);        
    }
    cout<<*max_element(arr.begin(), arr.end());
    return 0;
}