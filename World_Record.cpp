#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    double k1,k2,k3;
    double v,record=9.58;
    cin>>k1>>k2>>k3>>v;
    double initialtime= k1 * k2 * k3 * v;
    double finaltime=100/initialtime;
    finaltime = (int)((finaltime * 100) + .5);
    finaltime= ((float)finaltime )/ 100;
    if(finaltime <= 9.57){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
}
return 0;
}