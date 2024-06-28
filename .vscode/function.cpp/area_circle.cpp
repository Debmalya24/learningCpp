#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float areaOfCircle(int x){

    float area=2*3.14*x;

    return area;
}

int main(){

    int r;
    cout<<"Enter the radious : ";
    cin>>r;

    cout<<areaOfCircle(r)<<" "<<endl;

    return 0;
}