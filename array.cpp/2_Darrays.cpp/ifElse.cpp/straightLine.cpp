#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    float x1,x2,x3,y1,y2,y3,sloap1,sloap2;

    cout<<"enter the value of x1 : y1 = ";
    cin>>x1>>y1;

    cout<<"enter the value of x2 : y2 = ";
    cin>>x2>>y2;

    cout<<"enter the value of x3 : y3 = ";
    cin>>x3>>y3;

    sloap1=(y2-y1)/(x2-x1);
    sloap2=(y3-y2)/(x3-x2);

    if(sloap1==sloap2){

        cout<<"All 3 points on line";
    }

    else{

        cout<<"All 3 points are not on line";
    }

    return 0;
}