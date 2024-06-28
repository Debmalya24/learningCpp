#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the lines : ";
    cin>>n;

    int nsp=n-1;
    int nst=1;

    for(int i=1;i<=n;i++){

        //for space 

        for(int j=1;j<=nsp;j++){

            cout<<" ";
        }

        nsp--;

        //for number

        for(int k=1;k<=nst;k++){

            cout<<k;
        }

        nst+=2;

        cout<<endl;
    }

    return 0;
}