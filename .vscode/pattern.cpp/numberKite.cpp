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

    for(int i=1;i<=n;i++){

        //for space 

        for(int j=1;j<=n-i;j++){

            cout<<" ";
        }

        //for number

        for(int k=1;k<=2*i-1;k++){

            cout<<k;
        }

        cout<<endl;
    }

    return 0;
}