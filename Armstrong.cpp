#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

void solve(int t){
int temp=t,result,sum;
vector<int> even;
vector<int> odd;
while(t>0){
result=t%10;
if(result%2==0){
    even.push_back(result);
}else {
    odd.push_back(result);
}    
sum=sum+(result*result*result);    
t=t/10;  
}
if(temp==sum){
cout<<accumulate(even.begin(),even.end(),0);
}else {
    cout<<accumulate(odd.begin(),odd.end(),0);

}
}

int main(){
    int t;
    cin>>t;
    solve(t);
    return 0;
}