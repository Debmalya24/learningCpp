#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    float l;
    cout<<"Enter the value of the length :  ";
    cin>>l;

    float b;
    cout<<"Enter the value of breadth : ";
    cin>>b;

    float a=l*b;//a=area
    float p=2*(l+b);//p=perimeter

    cout<<"The value of the area :"<<a<<endl;
    cout<<"The value of the perimeter :"<<p<<endl;

    if(a>p){
        cout<<"the value of the area of the reactangle is greater than the value of perimeter"<<endl;
    }
    else{
        cout<<"the value of the perimeter of the reactangle is greater than the value of area"<<endl;
    }

    return 0;
}