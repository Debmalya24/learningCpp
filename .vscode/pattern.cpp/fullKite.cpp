#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"enter the number of lines : ";
    cin>>n;

    int nsp=n-1;
    int nst=1;

    for(int i=1;i<=2*n-1;i++){

        for(int j=1;j<=nsp;j++){

            cout<<" "; //to print space
        }

        if(i<=n-1) nsp--;
        else nsp++;

        for(int k=1;k<=nst;k++){

            cout<<"*"; //to print stars
        }

        if(i<=n-1) nst +=2;
        else nst -=2;

        cout<<endl;
    }

    return 0;
}