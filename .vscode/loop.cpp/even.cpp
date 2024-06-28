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


    for(int i=1;i<=n;i++){

        if(i%2==0) cout<<i<<endl;
    }

    //<......other process.........>

    for(int i=1;i<=n;i+=2){

        cout<<i<<endl;
    }

    return 0;
}