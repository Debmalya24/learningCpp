#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int function(int n,int m){

    //base case

    if(m==0) return 1;

    return n* function(n,m-1);

    
}

int main(){

    int result=function(17,2);

    cout<<result;

    return 0;
}