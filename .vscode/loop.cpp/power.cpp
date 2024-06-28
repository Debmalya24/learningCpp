#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a;
    cout<<"Enter the base :  ";
    cin>>a;

    int b;
    cout<<"Enter the exponent :  ";
    cin>>b;

    bool flag=true;//means the number is true
    float power=1;

    if(b<0){

        flag=false;
        b=-b;
    }

    for(int i=1;i<=b;i++){

        power*=a;
    }

    if(flag==false){

        power=1/power;
        b=-b;
    }

    if(a==0 && b==0) cout<<"Not defined"<<endl;
    else cout<<a<<" raised to the power "<<b<<" is eqal to "<<power<<endl;

    return 0;
}