#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int last_digit=0;
    int r=0;

    while(n>0){

        last_digit=n%10;
        r*=10;
        r=r+last_digit;
        n/=10;
    }

    cout<<"the reverse number will be =>"<<r<<endl;

    return 0;
}