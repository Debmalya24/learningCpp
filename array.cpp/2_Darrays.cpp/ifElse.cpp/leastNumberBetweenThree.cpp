#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b,c;
    cout<<"The value of a is : ";
    cin>>a;

    cout<<"The value of b is : ";
    cin>>b;

    cout<<"The value of c is : ";
    cin>>c;

    if((a<=b) &&(a<=c)){

        cout<<a<<" is the least number"<<endl;
    }

    else if((b<=a) && (b<=c)){

        cout<<b<<" is the least number "<<endl;
    }

    else{

        cout<<c<<" is the least number"<<endl;
    }

    return 0;

}