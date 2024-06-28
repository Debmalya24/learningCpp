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

    if(n%5==0){

        if(n%3==0){

            cout<<"The number is divided by both 5 and 3";
        }
        else{

            cout<<"The statement is not true ";
        }
    }

    else{

        cout<<" The statement is not true";
    }

    return 0;
}