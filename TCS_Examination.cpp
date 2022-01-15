#include <bits/stdc++.h>
using namespace std;

void solve(){
    int dragon[3]={0};
    int sloth[3]={0};
    int dragonSum=0,slothSum=0;
    for(int i=0;i<3;i++){
        cin>>dragon[i];
        dragonSum+=dragon[i];
    }
    for(int i=0;i<3;i++){
        cin>>sloth[i];
        slothSum+=sloth[i];
    }
    if(dragonSum>slothSum){
        cout<<"DRAGON"<<endl;
    }else if(dragonSum==slothSum){
        if(dragon[0]>sloth[0]){
            cout<<"DRAGON"<<endl;
        }else if(dragon[0]==sloth[0]){
            if(dragon[1]>sloth[1]){
            cout<<"DRAGON"<<endl;
        }else if(dragon[1]==sloth[1]){
            cout<<"TIE"<<endl;
        }else{
            cout<<"SLOTH"<<endl;
        }
        }else{
            cout<<"SLOTH"<<endl;
        }
    }else{
        cout<<"SLOTH"<<endl;
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