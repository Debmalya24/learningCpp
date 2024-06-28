#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the number of rows in the matrix: ";
    cin>>m;

    int n;
    cout<<"Enter the number of column in the matrix: ";
    cin>>n;

    int arr[m][n];

    //taking input

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){

        for(int j=i+1;j<n;j++){

            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}