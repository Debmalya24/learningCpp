#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int product(int* x,int* y){

    int sum=(*x)*(*y);

    return sum;
}

int main(){

    int n1;
    int n2;

    cout<<"Enter the first number: ";
    cin>>n1;

    cout<<"Enter the second number: ";
    cin>>n2;

    int* ptr1=&n1;
    int* ptr2=&n2;

    cout<<"The product of two numbers will be: "<<product(&n1,&n2)<<" "<<endl;

    return 0;

}