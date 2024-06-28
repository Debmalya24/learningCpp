#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x,y;
    cout<<"Enter the value of X axis : ";
    cin>>x;

    cout<<"Enter the value of Y axis : ";
    cin>>y;


    if(x==0 && y==0){

        cout<<"It is on the origin";
    }

    else if(x==0 && y!=0){

        cout<<"It is on the y axis";
    }

    else if(x!=0 && y==0){

        cout<<"It is on the x axis ";
    }

    else if(x!=0 && y!=0){

        cout<<"It is on the plane ";
    }

    return 0;
}