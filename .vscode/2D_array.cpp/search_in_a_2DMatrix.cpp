#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>>&v,int target){

    int row=v.size();
    int col=v[0].size();

    int i=0;
    int j=col-1;

    while(i<=row-1 && j>=0){

        if(v[i][j]==target){

            return true;
        }

        else if(v[i][j]>target){

            j--;

        }

        else{

            i++;
        }
    }

    return false;
}

int main(){

    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;

    int n;
    cout<<"Enter the no. of columns : ";
    cin>>n;

    vector<vector<int>>v(m,vector<int>(n));

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>v[i][j];
        }
    }

    int target;
    cout<<"Enter the target : ";
    cin>>target;

    bool ans=searchMatrix(v,target);

    if(ans==true){

        cout<<"There is the target element in the matrix ";
    }

    else{

         cout<<"There is no target element in the matrix ";
    }

    return 0;


}