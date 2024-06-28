#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x=5;
    int* ptr=&x;
    int** p=&ptr;

    cout<<&x<<" "<<endl;//0x61ff08 
    cout<<ptr<<" "<<endl;//0x61ff08 
    cout<<p<<" "<<endl;//0x61ff04

    cout<<x<<" "<<endl;//5
    cout<<*ptr<<" "<<endl;//5
    cout<<**p<<" "<<endl;//5

    return 0;
}