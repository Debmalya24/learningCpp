#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b){

    if(a==b){

        return a;
    }

    else if(a>b){

        return gcd(a-b,b);

    }

    else{
        return (a,b-a);
    }
}

int main(){

    int a,b,g;

    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    g=gcd(a,b);

    printf("gcd =%d ",g);
    return 0;
}