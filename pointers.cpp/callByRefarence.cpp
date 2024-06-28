#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *x,int *y){

    // try to swap a and y;

    int temp=*x;
    *x=*y;
    *y=temp;

    return;
}

int main(){

    int x=10;
    int y=20;

    int *ptrx=&x;

    int *ptry=&y;

    swap(ptrx,ptry);

    cout<<x<<" "<<y<<" ";


    return 0;
}