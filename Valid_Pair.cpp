#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a<=10 && b<=10 && c<=10){
    if(a==b){
        cout<<"YES";
    }else if(b==c){
        cout<<"YES";
    }else if(a==c){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}else{
    cout<<"NO";
}
return 0;
}