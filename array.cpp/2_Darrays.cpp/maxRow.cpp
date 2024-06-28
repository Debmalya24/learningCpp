#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// 0 1 1 1
// 0 0 0 1
// 0 0 1 1

//max_ones=3;
//max_ones_row=0;
//colums=4
//numberOfOnes=colums-j=4-1=3;

int maxNumberOnesRow(vector<vector<int>>&v){

    int max_ones=INT8_MIN;
    int max_ones_row=-1;
    int colums=v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){

            if(v[i][j]==1){
                int numberOfOnes=colums-j;

                if(numberOfOnes>max_ones){

                    max_ones=numberOfOnes;
                    max_ones_row=i;
                }
                break;

            }

        }
    }

    return max_ones_row;
}



int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>>vec(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cin>>vec[i][j];
        }
    }

    int res=maxNumberOnesRow(vec);
    cout<<res<<endl;

    return 0;
}