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

    int n;
    cout<<"Enter the no. of the columns in the array : ";
    cin>>n;

    int matrix[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>matrix[i][j];
        }
    }

    int maxSum=INT8_MIN;
    int maxRow=-1;

    for(int i=0;i<m;i++){

        int sum=0;

        for(int j=0;j<n;j++){

            sum+=matrix[i][j];
        }

        if(maxSum<sum){

            maxSum=sum;
            maxRow=i;
        }
    }

    cout<<maxSum<<" "<<maxRow;

    return 0;
}