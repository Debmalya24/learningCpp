#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the radious = ";
    cin>>n;

    float c=2*3.142*n;//circumference
    float  a=3.142*n*n;//area

    cout<<"the value of c is : "<<c<<endl;
    cout<<"the value of a is : "<<a<<endl;

    if(a>c){

        cout<<"area has the larger value than circumference"<<endl;
    }
    else{

        cout<<" circumference has the laarger value than area"<<endl;
    }

    return 0;
}