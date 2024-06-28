#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the row number : ";
    cin>>n;

    int m;
    cout<<"Enter the column number : ";
    cin>>m;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

            cout<<"*"<<" ";

        }

        cout<<endl;
    }

    return 0;
}