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

    //transpose of matrix

    for(int i=0;i<m;i++){

        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    //rotation of the array in 90 degree.
     for(int k=0;k<m;k++){

        int i=0;
        int j=n-1;

        while(i<=j){

            int tem=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=tem;
            i++;
            j--;
        }
    }



    //print output

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}