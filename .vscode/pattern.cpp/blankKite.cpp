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

        for(int j=1;j<=n;j++){

            if(i==j) cout<<"*"<<" ";

            else cout<<"  ";
        }

        for(int k=1;k<=n-1;k++){

            if(i+k ==n) cout<<"*"<<" ";
            else cout<<"  ";
        }

        cout<<endl;
    }


    return 0;
}