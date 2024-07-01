#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the no. rows of the array : ";
    cin>>m;

    int n;
    cout<<"Enter the no. columns of the array : ";
    cin>>n;

    int matrix[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>matrix[i][j];
        }
    }

    int mid=n/2;

     for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            if(i==mid || j==mid){

                cout<<matrix[i][j]<<" ";
            }
            else {

                cout<<"  ";
            }

           
        }
         cout<<endl;
    }

    return 0;
}