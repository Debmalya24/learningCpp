#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void squareNum(int x){

    int sqr=1;

    for(int i=1;i<=x;i++){

        cout<<i*i<<" "<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    squareNum(n);

    return 0;
}