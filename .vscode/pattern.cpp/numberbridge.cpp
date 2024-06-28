#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the numbers of lines : ";
    cin>>n;

    //to print the 2n-1 numbers;

    for(int i=1;i<=2*n-1;i++){

        cout<<i;

    }
    cout<<endl;

    int m=n-1;
    int nsp=1;

    for(int i=1;i<=m;i++){

        int a=1;

        for(int j=1;j<=m+1-i;j++){

            cout<<a;  // to print first half number
            a++;
        }

        for(int k=1;k<=nsp;k++){

            cout<<" ";  // to prit the spaces 
            a++;
        }

        nsp +=2;

        for(int j=1;j<=m+1-i;j++){

            cout<<a;  // to print second half number
            a++;
        }

        cout<<endl;
    }

    return 0;
}