#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x=7;
    int* ptr=&x;

    cout<<ptr<<" "<<endl;//0x61ff08
    ptr=ptr+1;

    cout<<ptr<<" "<<endl;//0x61ff0c

    return 0;

}