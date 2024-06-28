#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a,int *b){

    int temp=*a;
    *a=*b;
    *b=temp;

    return;
}

int main(){

    int n;
    int a,b;
    cin>>a>>b;
    swap(&a,&b);

    cout<<a<<" "<<b<<" "<<endl;

    return 0;
}