#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x,y;

    int* p1=&x;
    cout<<"Enter the first number : ";
    cin>>*p1;

    int* p2=&y;
    cout<<"Enter the second number : ";
    cin>>*p2;

    cout<<"The sum of the two numbers will be : "<<*p1+*p2<<endl;

    return 0;
}