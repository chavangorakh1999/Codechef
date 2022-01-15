#include <bits/stdc++.h>
using namespace std;

void solve(){
    int start,end;
    cin>>start>>end;
    int odd_avg=0,odd_sum=0,odd_count=0;
    int even_avg=0,even_sum=0,even_count=0;

    for(int i=start;i<=end;i++){
        if(i%2==0){
            even_sum+=i;
            even_count++;
        }else{
            odd_sum+=i;
            odd_count++;
        }
    }
    odd_avg=odd_sum/odd_count;
    even_avg=even_sum/even_count;

    for(int i=1;i<=(even_avg/2);i++){
        if(even_avg%i==0){
            cout<<"even_avg is not prime";
        }
    }
    cout<<"even_avg is prime "<<endl;
    cout<<odd_avg<<" "<<even_avg<<endl;
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