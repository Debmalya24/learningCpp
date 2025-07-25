#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int f(int p,int q){

    if(q==0) return 1;

    if(q%2==0){ //q is even

        int result=f(p,q/2);

        return result*result;
    }
    else{

        int result=f(p,(q-1)/2);

        return p*result*result;
    }
}

int main(){

    int res=f(2,5);

    cout<<res<<endl;

    return 0;
}