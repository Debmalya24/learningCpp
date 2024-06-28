#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    cout<<"Enter the value of c : ";
    cin>>c;

    if((a==b)&&(b==c)){

        cout<<"The triangle is equilataral"<<endl;
    }

    else if((a==b )||(b==c )||(c==a)){

        cout<<"The triangle is isocales "<<endl;
    }

    else{

        cout<<"The traingle is salene "<<endl;
    }

    return 0;
}