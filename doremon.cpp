#include <bits/stdc++.h>
using namespace std;

void solve(int n,int m,int arr1[],int arr2[]){
    vector<int> output;
    if(n>m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr1[i]==arr2[j]){
                    output.push_back(arr1[i]);
                    break;
                }
            }
        }
    }else{
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr2[i]==arr1[j]){
                    output.push_back(arr2[i]);
                    break;
                }
            }
        }
    }
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    solve(n,m,arr1,arr2);
    return 0;
}