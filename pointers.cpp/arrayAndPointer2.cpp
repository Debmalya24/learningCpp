#include<cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    int *ptr=(arr+2);

    cout<<*ptr<<endl;

    *ptr++;

    cout<<*ptr<<endl;

    *ptr--;

    cout<<*ptr<<endl;


    return 0;
}