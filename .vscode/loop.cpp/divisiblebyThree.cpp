#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=3;i<=n;i=i+3){

        cout<<i<<endl;
    }

    //<.....other process.........>

    for(int i=1;i<=n;i++){

        if(i%3==0){

            cout<<i<<endl;
        }
    }

    return 0;
}