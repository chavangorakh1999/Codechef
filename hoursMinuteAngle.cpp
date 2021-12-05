#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

double smallest(double a,double b){
    return (a<b)?a:b;
}

int main(){
    string time;
    getline(cin,time);

    string a,b,c;
    a=time.substr(3,time.size());
    b=time.substr(0,time.size()-3);
    int min=stoi(a);
    int hr=stoi(b);

    if(hr==12){
        hr=0;
    }
    if(min==60){
        min=0;
    }

    double hour_angle=0.5*(hr*60+min);
    double minute_angle=6*min;
    double angle=abs(hour_angle-minute_angle);

    angle=smallest(360-angle,angle);
    cout<<fixed<<setprecision(1)<<angle;
    return 0;
}