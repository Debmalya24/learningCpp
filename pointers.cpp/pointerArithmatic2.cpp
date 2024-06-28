#include<cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x=10;

    int *ptr=&x;

    cout<<ptr<<" "<<endl;

    ptr=ptr+1;

    ptr+=1;

    cout<<ptr<<" "<<endl;

    return 0;
}