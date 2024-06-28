#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap_number(int a,int b){

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<a<<" "<<b<<" ";
}

int main(){

    int a;
    cout<<"Enter the first number : ";
    cin>>a;

    int b;
    cout<<"Enter the second number : ";
    cin>>b;

    swap_number(a,b);

    return 0;
}