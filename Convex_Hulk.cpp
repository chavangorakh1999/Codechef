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
            cout<<"𝚂𝙰𝙼𝙴 𝙿𝚁𝙸𝙲𝙴"<<endl;
        }else if(x>y){
            cout<<"𝙳𝙸𝙴𝚂𝙴𝙻"<<endl;
        }else{
            cout<<"𝙿𝙴𝚃𝚁𝙾𝙻"<<endl;
        }
    }
    return 0;
}