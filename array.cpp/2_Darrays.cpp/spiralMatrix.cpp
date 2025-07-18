#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// 1 2 3
// 4 5 6
// 7 8 9

//left=1 ,right=1;
//top=1; bottom=1;

//direction=3+1 %4=0;

//ans=1 2 3 6 9 8 7 4 5

void spiralOrder(vector<vector<int>> &matrix){

    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;

    int direction=0;

    while(top<=bottom && left<=right){

        //left->right

        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<matrix[top][i]<<" ";
            }
            top++;
        }

        //top->bottom

        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                cout<<matrix[row][right]<<" ";
            }
            right--;
        }

        //right->left

        else if(direction==2){

            for(int col=right;col>=left;col--){

                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        }

        //bottom->top

        else{
            for(int row=bottom;row>=top;row--){
                cout<<matrix[row][left]<<" ";
            }

            left++;
        }


        direction=(direction+1)%4;
        //0 1 2 3
    }
    
    return;

}

int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    spiralOrder(matrix);

    return 0;
}