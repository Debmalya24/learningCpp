#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    char str[5]={'a','b','c','d','e'};

    //print;

    for(int i=0;i<5;i++){

        cout<<str[i]<<" ";
    }cout<<endl;


    //<...prove of'\0' existing in the end of  every string ....>


    cout<<"printing the elements : ";

    for(int i=0;i<str[i] !='\0';i++){

        cout<<str[i]<<" ";
    }cout<<endl;


    cout<<"printing the elements : ";

     cout<<str<<endl;


    return 0;
}