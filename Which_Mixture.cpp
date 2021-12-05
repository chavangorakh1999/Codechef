#include<bits/stdc++.h>
using namespace std;

void solve(int a, int b){
    if(a>0 && b>0){
        cout<<"Solution"<<endl;
    }else if(b==0){
        cout<<"Solid"<<endl;
    }else if(a==0) {
        cout<<"Liquid"<<endl;
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a=0,b=0;
        cin>>a>>b;
        solve(a,b);
    }
    return 0;
}