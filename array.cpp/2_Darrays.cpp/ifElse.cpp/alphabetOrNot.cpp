#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    cout<<"Enter an chracter :";
    char ch;
    cin>>ch;

    // a to z ->97 to 122
    // A to Z ->65 to 90

    int ascii=(int)ch;

    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){

        cout<<"This is an alphabet";
    }

    else{

        cout<<"This is not an alphabet";
    }

    return 0;

}