#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the year : ";
    cin>>n;

    if(n%4==0){

        cout<<n<<"  is the leapYear"<<endl;
    }
    else{

        cout<<n<<"  is not a leapYear"<<endl;
    }

    return 0;
}