#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter the first number : ";
    cin>>a;

    cout<<"Enter the 2nd number : ";
    cin>>b;

    cout<<"Enter the 3rd number : ";
    cin>>c;

    if(a>b){

        if(a>c){

            cout<<a<<" is the greatest number ";
        }

        else{

            cout<<c<< " is the greatest number";
        }

    }

    else{

        if(b>c){

            cout<<b<<" is the greatest number";
        }

        else{

            cout<<c<<" is the greatest number ";
        }
    }

    return 0;
}