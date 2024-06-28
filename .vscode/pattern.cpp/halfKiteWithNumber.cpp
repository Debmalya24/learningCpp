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

        for(int j=1;j<=n-i;j++){

            cout<<" ";  //for the space
        }

        for(int k=1;k<=i;k++){

            cout<<k; //for the half part 
                     //   1
                     // 1 2 
                    //1 2 3

        }

        for(int m=i-1;m>=1;m--){ //for the other part

            cout<<m;
        }

        cout<<endl;
    }

    return 0;
}