#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//3

//{[1] [2] [3]
// [9] [9] [4]
// [7] [6] [5]}

vector<vector<int>>createSpiralMatrix(int n){

    vector<vector<int>>matrix(n,vector<int>(n));

    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;

    int direction=0;
    int value=1;

    while(left<=right && top<=bottom){

        if(direction==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=value++;
            }

            top++;
        }

        else if(direction==1){
            for(int j=top;j<=bottom;j++){
                matrix[j][right]=value++;
            }

            right--;
        }

        else if(direction==2){
            for(int i=right;i>=left;i--){
                matrix[bottom][i]=value++;
            }
            bottom--;
        }

        else{

            for(int j=bottom;j>=top;j--){
                matrix[j][left]=value++;
            }

            left++;
        }

        direction=(direction+1)%4;
    }

    return matrix;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));

    matrix=createSpiralMatrix(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
}