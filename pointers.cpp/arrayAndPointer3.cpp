#include<cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[3]={11,12,13};

    int (*p)[3]=&arr;

    cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr<<" "<<endl;

    return 0;
}