#include <bits/stdc++.h>
using namespace std;

int returnIndex(char arr[],char a){
    for(int i=0;i<3;i++){
        if(arr[i]==a){
            return i;
        }
    }
    return -1;
};

void solve(char arr[],char x,char y){
    int xIndex=returnIndex(arr,x);
    int yIndex=returnIndex(arr,y);
    char output=xIndex<yIndex?x:y;
    cout<<output<<endl;
    return;
};

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n=3;
        char arr[3];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        char x,y;
        cin>>x>>y;
        solve(arr,x,y);
    }
    return 0;
}