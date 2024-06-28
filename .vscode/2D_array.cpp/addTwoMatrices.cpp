#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m1;
    cout<<"Enter the number of rows in the array: ";
    cin>>m1;

    int n1;
    cout<<"Enter the number of columns in the arry : ";
    cin>>n1;

     //taking the inputs of 2-D array;

    int arr[m1][n1];


    for(int i=0;i<=m1-1;i++){

        for(int j=0;j<=n1-1;j++){

            cin>>arr[i][j];
        }
    }

    cout<<endl;


    int m2;
    cout<<"Enter the number of rows in the array: ";
    cin>>m2;

    int n2;
    cout<<"Enter the number of columns in the arry : ";
    cin>>n2;

    int brr[m2][n2];


    for(int i=0;i<=m2-1;i++){

        for(int j=0;j<=n2-1;j++){

            cin>>brr[i][j];
        }
    }


    //add two matrices

    for(int i=0;i<=m2-1;i++){

        for(int j=0;j<=n2-1;j++){

            brr[i][j]+=arr[i][j];

        }
    }

    //print the matrcies

    cout<<"the resultant sumwill be : "<<endl;;

    for(int i=0;i<=m2-1;i++){

        for(int j=0;j<=n2-1;j++){

            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;

}