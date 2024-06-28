#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x=4;
    int *p=&x;

    cout<<&x<<endl; //printing the address of "x" variable ;and the address is 0x61ff08
    cout<<p<<endl; //0x61ff08;

    // <.........for char data type.........>

    char t='s';
    char *y= &t; 

     cout<<&t<<endl; //s♦
     cout<<y<<endl; //s♦

    // <..........for bool data typle .......>

    bool m=true;//0x61fefe
    bool *u=&m;//0x61fefe

     cout<<&m<<endl;
     cout<<u<<endl; 

    return 0;

}