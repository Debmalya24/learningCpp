#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the no. of the rows in the array : ";
    cin>>m;


    int matrix[m][m];

    for(int i=0;i<m;i++){

        for(int j=0;j<m;j++){

            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<m;i++){

        for(int j=0;j<m;j++){

            if(i==m/2|| j==m/2){


                cout<<matrix[i][j]<<" ";
            }
            else {

                cout<<" "<<" ";
            }
            
        }cout<<endl;
    }

    return 0;
}