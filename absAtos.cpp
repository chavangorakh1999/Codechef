#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;
 
int minPenalty(int input1, int input2[]){
    sort(input2,input2+input1,greater<int>());
    int sum=0;
    for(int i=0;i<input1-1;i++){
        sum+=abs(input2[i]-input2[i+1]);
    }
    return sum;
}

int main(){
    string n;
    cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<minPenalty(n,arr);
    cout<<n;

    return 0;
}