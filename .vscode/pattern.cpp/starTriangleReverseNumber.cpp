#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the numbers of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n+1-i;j++){

            cout<<j<<" ";
        }

        cout<<endl;
    }

    return 0;
}