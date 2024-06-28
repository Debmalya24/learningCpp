#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x=18;
    float y=7.9;


    //create a pointer that can store adress of x;
    //as X is an integer variable,so we need a  pointer;
    //that can store adressof integer type


    int *ptr=&x;

    cout<<ptr<<endl;

    //create a pointer that can store adress of x;
    //as y is an float variable,so we need a  pointer;
    //that can store adressof float type

    float *ptr2=&y;

    cout<<ptr2<<endl;

    int *ptr3;//only declaring the pointer

    cout<<ptr3<<endl;

    int marks=90;

    ptr3=&marks;//re-assignment/update;

    cout<<ptr3<<endl;

    return 0;
}