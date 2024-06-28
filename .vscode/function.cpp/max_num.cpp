#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int x,int y,int z){

    if(x>y && x>z) return x;

    else if(y>x && y>z) return y;

    else return z;
}

int max2(int m,int n){

    int b=max(m,n);
    return b;
} 

int main(){

    int a;
    cout<<"Enter the number1: ";
    cin>>a;
    

    int b;
    cout<<"Enter the number2: ";
    cin>>b;


    int c;
    cout<<"Enter the number3: ";
    cin>>c;

    cout<<"The maximum number is: "<<max(a,b,c)<<endl;

    cout<<"The maximum number is: "<<max(a,b)<<endl;

    return 0;
}