#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int Mat[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cin>>Mat[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){

            swap(Mat[i][j],Mat[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){               // instead of(n/2) we can write 1;
            swap(Mat[i][j],Mat[i][n-j-1]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Mat[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}