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

    cout<<"Adress stored inside ptr = "<<ptr<<endl;

    cout<<"Value present at thr adresss stored in ptr = "<<*ptr<<endl;//derefarence operator

    //create a pointer that can store adress of x;
    //as y is an float variable,so we need a  pointer;
    //that can store adressof float type

    float *ptr2=&y;

    cout<<"Adress stored inside ptr = "<<ptr2<<endl;
    
    cout<<"Value present at thr adresss stored in ptr = "<<*ptr2<<endl;//derefarence operator;


    x=23; //the bucket x updated the value from 18 -> 23
    //but the ptr is still pointing same bucket;
    //now if we  dereferance the ptr,we will get 23;

    cout<<"New updated value of x= "<<x<<endl;

    cout<<" ptr is still pointing the same memory which has 23 instead of 18= "<< *ptr<<endl;

    //updating x with pointer

    *ptr=50;

    cout<<"New value of X is : "<<x<<endl;

    cout<<"New value pointed by ptr : "<<*ptr<<endl;

    int value_At_x= *ptr;

    cout<<value_At_x<<endl;


    return 0;
}