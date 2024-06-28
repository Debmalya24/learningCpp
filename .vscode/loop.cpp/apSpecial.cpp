#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a=100;

    //100,97,94,91,88,85.............7,4,1;

    for(int i=100;i>0;i=i-3){

        cout<<i<<endl;
    }

    //<....other process.......>

    for(int i=1;a>0;i++){

        cout<<a<<endl;

        a=a-3;
    }

    return 0;
}