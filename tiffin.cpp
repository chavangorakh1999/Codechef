#include<iostream>
#include<stack>
using namespace std;

int hungryChildrens(int input1,int input2[],int input3[]){
    int tiffin_ones=0;
    int tiffin_zeros=0;
    int student_ones=0;
    int student_zeros=0;
    for(int i=0;i<input1;i++){
        if(input2[i]==0){
           tiffin_zeros++; 
        }else{
            tiffin_ones++;
        }
    }
    for(int i=0;i<input1;i++){
        if(input3[i]==0){
           student_zeros++; 
        }else{
            student_ones++;
        }
    }
     if(student_zeros==tiffin_zeros && student_ones==tiffin_ones){
        return 0;
    }else if(student_ones > tiffin_ones || student_zeros > tiffin_zeros) {
        if(student_ones > tiffin_ones){
            return student_ones-tiffin_ones;
        }else{
             return student_ones-tiffin_zeros;
        }
    }else{
         if(student_ones < tiffin_ones){
            return tiffin_ones-student_ones;
        }else{
            return tiffin_zeros-student_ones;
        }
    }
}

int main(){
    int n;
    cin>>n;
    stack<int> tiffin;
    stack<int> student;
   

    return 0;
}