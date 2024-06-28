#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of lines : ";
    cin>>n;

    for(int i=1;i<=n;i++){


        //for the space 

        for(int j=1;j<=n-i;j++){

            cout<<" ";
        }

        //for the stars

        for(int k=1;k<=(2*i-1);k++){

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}