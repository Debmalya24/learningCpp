#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;


    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){

            cout<<" ";//to print space;
        }

        for(int k=1;k<=n;k++){

            cout<<"*";//to print star
        }

        cout<<endl;
    }

    return 0;
}