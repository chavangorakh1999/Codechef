#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    for (int i=digits.size(); i--; digits[i] = 0){
        if (digits[i]++ < 9){
            return digits; 
            }
    digits[0]++;
    digits.push_back(0);
    }
    return digits;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> output;
        for(int i=0;i<n;i++){
            int z;
            cin>>z;
            output.push_back(z);
        }
        vector<int> result=plusOne(output);
        for(int i=0;i<n;i++){
            cout<<result[i]<<" ";
        }
    }
    return 0;
}