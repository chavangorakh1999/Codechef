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
            cout<<"ππ°πΌπ΄ πΏππΈπ²π΄"<<endl;
        }else if(x>y){
            cout<<"π³πΈπ΄ππ΄π»"<<endl;
        }else{
            cout<<"πΏπ΄πππΎπ»"<<endl;
        }
    }
    return 0;
}