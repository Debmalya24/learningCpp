#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}