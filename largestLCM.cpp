#include<iostream>
#include<vector>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
    return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


int main(){
    long long n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    for(int i=0;i<n-1;i++){
        v.push_back(lcm(arr[i],arr[i+1]));
    }
    sort(v.begin(), v.end());
    cout<<v[v.size()-1];
    return 0;
}