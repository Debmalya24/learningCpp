#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    cout<<"Enter an Integer";
    int n;
    cin>>n;

    if(n<0){
        n=-n;
    }

    cout<<n;

    return 0;
}