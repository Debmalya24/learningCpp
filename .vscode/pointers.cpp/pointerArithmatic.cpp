#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a=15;
    int* ptr=&a;
    int b=++(*ptr);
    cout<<a<<" "<<b<<" "<<endl;

    return 0;
}