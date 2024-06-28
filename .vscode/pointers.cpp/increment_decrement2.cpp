#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x=7;
    int *ptr=&x;
    cout<<*ptr<<" "<<endl;//7

    ptr=ptr+1;
    cout<<*ptr<<" "<<endl;//garbage value->6422284;

    return 0;
}