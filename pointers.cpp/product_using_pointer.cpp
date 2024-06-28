#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;

    cout<<"Enter the first number : "; 

    cin>>n;//entering the first number

    int m;

    cout<<"Enter the second number: ";

    cin>>m;//enter the second number;

    int *ptrn=&n;//adress of the first number

    int *ptrm=&m;//adress of the second number


    int result;

    int *ptr_result=&result;//adress of the result variable;


    *ptr_result=*ptrn**ptrm;//adress of the product of the two numbers;

    cout<<"The sum of the two number is= "<<*ptr_result<<endl;

    return 0;
}
