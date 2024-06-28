#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int function(int n){

    //bade case

    if(n<=9 && n>=0) return n;

    return function(n/10)+(n%10);
}

int main(){
    int result=function(653);

    cout<<result;

    return 0;
}
