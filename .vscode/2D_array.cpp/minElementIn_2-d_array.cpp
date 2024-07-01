#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"enter the number of row elements: ";
    cin>>m;

    int n;
    cout<<"enter the number of column elements: ";
    cin>>n;

    int arr[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>arr[i][j];
        }
    }

    int min=arr[0][0];

    for(int i=0;i<m;i++){

        for(int j=1;j<n;j++){

            if(min>arr[i][j]){

                min=arr[i][j];
            }
        }
    }

    cout<<"The minimum number of the array is => "<<min<<" "<<endl;

    return 0;
}