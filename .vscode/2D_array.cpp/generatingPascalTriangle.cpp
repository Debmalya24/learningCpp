#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>>pascal(int numRow ){

    int m=numRow;

    vector<vector<int>>v;

    //adding 1-d vectors in the 2-D vectors

    //for(int i=1;i<=m;i++){

      //  vector<int>a(i);
     //   v.push_back(a);
   // }

    //generate

    for(int i=0;i<m;i++){

        vector<int>a(i+1);
        v.push_back(a);

        for(int j=0;j<=i;j++){

            if(i==j || j==0){

                v[i][j]=1;
            }

            else{

                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }

    return v;


}

int main(){

    int m;
    cout<<"Enter the numRows : ";
    cin>>m;

    vector<vector<int>>v=pascal(m);

    //print

    for(int i=0;i<v.size();i++){

        for(int j=0;j<=i;j++){

            cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;

}