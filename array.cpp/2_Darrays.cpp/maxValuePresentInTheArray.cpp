#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    int m,n;
    cin>>m>>n;

    int Max[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            cin>>Max[i][j];
        }
    }

    int value=INT8_MIN;
    //int value=Max[0][0];  (we can use Max[0][0] instead of INT_MAIN)

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            if(Max[i][j]>value){

                value=Max[i][j];
            }
        }
    }

    cout<<value<<endl;


    return 0;
}