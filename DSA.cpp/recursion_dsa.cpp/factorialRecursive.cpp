#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int f(int n){
    //base case

    if(n==1){

        return 1;
    }

    return n*f(n-1);
}

int main(){

    int result=f(5);
    cout<<result;

    return 0;
}