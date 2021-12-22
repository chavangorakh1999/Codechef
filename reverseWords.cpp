#include <bits/stdc++.h>
using namespace std;

void solve(){
    int p=1,q=6,r=7;
    q=(p&6)^q;
    r=p+7;
    r=(r+8)&p;
    cout<<p+q+r;


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