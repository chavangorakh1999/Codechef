#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        x=x+(k*a);
        y=y+(k*b);
        if(x==y){
            cout<<"SAME PRICE"<<endl;
        }else if(x>y){
            cout<<"DIESEL"<<endl;
        }else{
            cout<<"PETROL"<<endl;
        }
    }
    return 0;
}