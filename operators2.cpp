#include<iostream>
using namespace std;

int main(){

    bool exp1=true;
    bool exp2=false;

    cout<<(exp1&&exp2)<<endl;//false
    cout<<(exp1&&exp1)<<endl;//true
    cout<<(exp1||exp2)<<endl;//true
    cout<<(!exp1)<<endl;//false
    cout<<(!exp2)<<endl;//true


    return 0;
}